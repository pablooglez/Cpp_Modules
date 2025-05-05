/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:50:36 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/05 19:13:11 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	std::cout << "Array constructor called" << std::endl;

	this->_array = new T[0];
	this->_size = 0;
}

template <typename T>
Array<T>:: ~Array()
{
	std::cout << "Array destructor called" << std::endl;

	if (this->_array)
		delete[] this->_array;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Array constructor with size " << n << " called" << std::endl;

	this->_array = new T[n];
	this->_size = n;
}

template <typename T>
Array<T>::Array(const Array &obj)
{
	std::cout << "Array copy constructor called" << std::endl;

	this->_array = NULL;
	this->_size = 0;

	*this = obj;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &obj)
{
	std::cout << "Array copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		delete[] this->_array; // Free memory

		this->_array = new T[obj._size]; // Assignment new memory

		for(unsigned int i = 0; i < obj._size; i++) // Copy elements
			this->_array[i] = obj._array[i];

		this->_size = obj._size;
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw std::out_of_range("Index out of range");
	return (this->_array[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_size)
		throw std::out_of_range("Index out of range");
	return (this->_array[index]);
}

template <typename T>
int Array<T>::size() const
{
	return (this->_size);
}