/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:00:36 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/21 21:54:07 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	
}

PmergeMe::~PmergeMe() throw()
{
	
}

PmergeMe::PmergeMe(const PmergeMe &obj) throw()
{
	(void)obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj) throw()
{
	if (this == &obj)
	{
		return (*this);
	}
	return (*this);
}

// Implementación específica para std::vector
void PmergeMe::sortVector(std::vector<int>& vec)
{
	if (vec.size() <= 1)
		return;
	
	vec = mergeInsertionSortVector(vec);
}

std::vector<int> PmergeMe::mergeInsertionSortVector(std::vector<int> vec)
{
	// Si el vector tiene 0 o 1 elementos, ya está ordenado
	if (vec.size() <= 1)
		return vec;
	
	// Valor impar al final si es necesario
	int odd_element = -1;
	bool has_odd = false;
	
	if (vec.size() % 2 != 0)
	{
		has_odd = true;
		odd_element = vec.back();
		vec.pop_back();
	}
	
	// Crear pares de elementos
	std::vector<std::pair<int, int> > pairs;
	for (size_t i = 0; i < vec.size(); i += 2)
	{
		int a = vec[i];
		int b = vec[i + 1];
		// El primer elemento de cada par es el mayor
		if (a < b)
			pairs.push_back(std::make_pair(b, a));
		else
			pairs.push_back(std::make_pair(a, b));
	}
	
	// Ordenar los pares por sus primeros elementos (los mayores)
	insertionSortVector(pairs);
	
	// Crear la secuencia principal con los elementos mayores ya ordenados
	std::vector<int> result;
	std::vector<int> pending;
	
	// El menor elemento del primer par siempre va primero
	result.push_back(pairs[0].second);
	
	// Agregar los elementos mayores a la secuencia principal
	for (size_t i = 0; i < pairs.size(); i++)
	{
		result.push_back(pairs[i].first);
		if (i > 0)
			pending.push_back(pairs[i].second);
	}
	
	// Secuencia de Jacobsthal para determinar el orden de inserción
	std::vector<int> jacobsthal_indices;
	
	// Generar suficientes números de Jacobsthal para nuestra secuencia
	int jsize = pending.size();
	if (jsize > 0)
	{
		jacobsthal_indices.push_back(1); // Comenzamos con 1 (índice del segundo elemento)
		
		int prev1 = 1;
		int prev2 = 1;
		int next_jac;
		
		while (jacobsthal_indices.back() < jsize)
		{
			next_jac = prev1 + 2 * prev2;
			if (next_jac > jsize)
				break;
			jacobsthal_indices.push_back(next_jac);
			prev2 = prev1;
			prev1 = next_jac;
		}
		
		// Generar todos los índices intermedios en orden descendente
		std::vector<int> all_indices;
		for (size_t i = 0; i < jacobsthal_indices.size(); i++)
		{
			int start = jacobsthal_indices[i];
			int end;
			if (i + 1 < jacobsthal_indices.size())
				end = jacobsthal_indices[i + 1];
			else
				end = jsize + 1;
			
			all_indices.push_back(start);
			for (int j = start - 1; j > end && j > 0; j--)
				all_indices.push_back(j);
		}
		
		// Insertar los elementos pendientes usando búsqueda binaria para encontrar la posición correcta
		for (size_t i = 0; i < all_indices.size() && i < pending.size(); i++)
		{
			int index = all_indices[i] - 1; // Convertir a índice base 0
			if (index >= 0 && index < (int)pending.size())
			{
				int element = pending[index];
				
				// Búsqueda binaria para encontrar la posición de inserción
				size_t left = 0;
				size_t right = result.size();
				
				while (left < right)
				{
					size_t mid = left + (right - left) / 2;
					if (result[mid] <= element)
						left = mid + 1;
					else
						right = mid;
				}
				
				result.insert(result.begin() + left, element);
			}
		}
	}
	
	// Insertar el elemento impar en su posición correcta si existe
	if (has_odd)
	{
		size_t pos = 0;
		while (pos < result.size() && result[pos] < odd_element)
			pos++;
		result.insert(result.begin() + pos, odd_element);
	}
	
	return result;
}

void PmergeMe::insertionSortVector(std::vector<std::pair<int, int> >& pairs)
{
	for (size_t i = 1; i < pairs.size(); i++)
	{
		std::pair<int, int> key = pairs[i];
		int j = i - 1;
		
		while (j >= 0 && pairs[j].first > key.first)
		{
			pairs[j + 1] = pairs[j];
			j--;
		}
		pairs[j + 1] = key;
	}
}

// Implementación específica para std::deque
void PmergeMe::sortDeque(std::deque<int>& deq)
{
	if (deq.size() <= 1)
		return;
	
	deq = mergeInsertionSortDeque(deq);
}

std::deque<int> PmergeMe::mergeInsertionSortDeque(std::deque<int> deq)
{
	// Si el deque tiene 0 o 1 elementos, ya está ordenado
	if (deq.size() <= 1)
		return deq;
	
	// Valor impar al final si es necesario
	int odd_element = -1;
	bool has_odd = false;
	
	if (deq.size() % 2 != 0)
	{
		has_odd = true;
		odd_element = deq.back();
		deq.pop_back();
	}
	
	// Crear pares de elementos
	std::deque<std::pair<int, int> > pairs;
	for (size_t i = 0; i < deq.size(); i += 2)
	{
		int a = deq[i];
		int b = deq[i + 1];
		// El primer elemento de cada par es el mayor
		if (a < b)
			pairs.push_back(std::make_pair(b, a));
		else
			pairs.push_back(std::make_pair(a, b));
	}
	
	// Ordenar los pares por sus primeros elementos (los mayores)
	insertionSortDeque(pairs);
	
	// Crear la secuencia principal con los elementos mayores ya ordenados
	std::deque<int> result;
	std::deque<int> pending;
	
	// El menor elemento del primer par siempre va primero
	result.push_back(pairs[0].second);
	
	// Agregar los elementos mayores a la secuencia principal
	for (size_t i = 0; i < pairs.size(); i++)
	{
		result.push_back(pairs[i].first);
		if (i > 0)
			pending.push_back(pairs[i].second);
	}
	
	// Secuencia de Jacobsthal para determinar el orden de inserción
	std::deque<int> jacobsthal_indices;
	
	// Generar suficientes números de Jacobsthal para nuestra secuencia
	int jsize = pending.size();
	if (jsize > 0)
	{
		jacobsthal_indices.push_back(1); // Comenzamos con 1 (índice del segundo elemento)
		
		int prev1 = 1;
		int prev2 = 1;
		int next_jac;
		
		while (jacobsthal_indices.back() < jsize)
		{
			next_jac = prev1 + 2 * prev2;
			if (next_jac > jsize)
				break;
			jacobsthal_indices.push_back(next_jac);
			prev2 = prev1;
			prev1 = next_jac;
		}
		
		// Generar todos los índices intermedios en orden descendente
		std::deque<int> all_indices;
		for (size_t i = 0; i < jacobsthal_indices.size(); i++)
		{
			int start = jacobsthal_indices[i];
			int end;
			if (i + 1 < jacobsthal_indices.size())
				end = jacobsthal_indices[i + 1];
			else
				end = jsize + 1;
			
			all_indices.push_back(start);
			for (int j = start - 1; j > end && j > 0; j--)
				all_indices.push_back(j);
		}
		
		// Insertar los elementos pendientes usando búsqueda binaria para encontrar la posición correcta
		for (size_t i = 0; i < all_indices.size() && i < pending.size(); i++)
		{
			int index = all_indices[i] - 1; // Convertir a índice base 0
			if (index >= 0 && index < (int)pending.size())
			{
				int element = pending[index];
				
				// Búsqueda binaria para encontrar la posición de inserción
				size_t left = 0;
				size_t right = result.size();
				
				while (left < right)
				{
					size_t mid = left + (right - left) / 2;
					if (result[mid] <= element)
						left = mid + 1;
					else
						right = mid;
				}
				
				result.insert(result.begin() + left, element);
			}
		}
	}
	
	// Insertar el elemento impar en su posición correcta si existe
	if (has_odd)
	{
		size_t pos = 0;
		while (pos < result.size() && result[pos] < odd_element)
			pos++;
		result.insert(result.begin() + pos, odd_element);
	}
	
	return result;
}

void PmergeMe::insertionSortDeque(std::deque<std::pair<int, int> >& pairs)
{
	for (size_t i = 1; i < pairs.size(); i++)
	{
		std::pair<int, int> key = pairs[i];
		int j = i - 1;
		
		while (j >= 0 && pairs[j].first > key.first)
		{
			pairs[j + 1] = pairs[j];
			j--;
		}
		pairs[j + 1] = key;
	}
}