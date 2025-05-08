/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:33:36 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/07 19:55:44 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
		std::vector<int>numbers;
		numbers.push_back(1);
		numbers.push_back(2);
		numbers.push_back(3);
		numbers.push_back(4);
		numbers.push_back(5);
		numbers.push_back(10);
		numbers.push_back(15);
		numbers.push_back(20);

		std::cout << "Vector contains: ";
		for (size_t i = 0; i < numbers.size(); i++) 
		{
			std::cout << numbers[i];
			if (i < numbers.size() - 1)
				std::cout << ", ";
		}
		std::cout << std::endl;
		
		// Easyfind with a value that exist
		try 
		{
			int value = 10;
			std::vector<int>::iterator result = easyfind(numbers, value);
			std::cout << "Value " << value << " found in the position: "
					 << std::distance(numbers.begin(), result) << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		
		// Easyfind with a value that does not exist
		try
		{
			int value = 42;
			std::vector<int>::iterator resultado = easyfind(numbers, value);
			std::cout << "Valor " << value << " encontrado en la posición: "
					 << std::distance(numbers.begin(), resultado) << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}

		std::list<int> list;
		list.push_back(30);
		list.push_back(25);
		list.push_back(20);
		list.push_back(15);
		list.push_back(10);
		list.push_back(5);

		std::cout << "\nList contains: ";
		for (std::list<int>::iterator result = list.begin(); result != list.end(); ++result)
		{
			std::cout << *result;
			std::list<int>::iterator temp = result;
			++temp;
			if (temp != list.end())
				std::cout << ", ";
		}
		std::cout << std::endl;
		
		try
		{
			int value = 20;
			std::list<int>::iterator result = easyfind(list, value);
			std::cout << "Valor " << value << " encontrado en la posición: "
					 << std::distance(list.begin(), result) << std::endl;
		} catch (const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		return (0);
}