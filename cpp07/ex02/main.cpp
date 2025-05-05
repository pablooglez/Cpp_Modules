/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:50:11 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/05 19:16:49 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		std::cout << "=== Testing array with specific size ===" << std::endl;
		Array<int> firstArray(5);

		for (int i = 0; i < firstArray.size(); i++)
		{
			std::cout << "firstArray at position " << i << " has value " << firstArray[i] << std::endl;
		}

		std::cout << std::endl;

		std::cout << "=== Testing copy constructor ===" << std::endl;
		Array<int> secondArray(firstArray);
		secondArray[1] = 10;

		std::cout << std::endl;

		for (int i = 0; i < secondArray.size(); i++)
		{
			std::cout << "secondArray at position " << i << " has value " << secondArray[i] << std::endl;
		}
		
		std::cout << std::endl;

		for (int i = 0; i < firstArray.size(); i++)
		{
			std::cout << "firstArray at position " << i << " has value " << firstArray[i] << std::endl;
		}
		
		std::cout << std::endl;

		std::cout << "=== Testing empty array ===" << std::endl;

		Array<int> emptyArray;
		std::cout << "Size of empty array: " << emptyArray.size() << std::endl;

		std::cout << std::endl;

		std::cout << "=== Testing const instance ===" << std::endl;

		const Array<int> constArray(3);

		std::cout << "constArray at position 0 has value " << constArray[0] << std::endl;
		
		std::cout << std::endl;

		std::cout << "=== Testing exception for out-of-range index ===" << std::endl;

		std::cout << "Trying to access firstArray[10] (out of range)..." << std::endl;
		std::cout << firstArray[10] << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	
	std::cout << std::endl;

	std::cout << "=== Testing separate exception handling ===" << std::endl;
	Array<char> charArray(3);
	try
	{
		charArray[0] = 'A';
		charArray[1] = 'B';
		charArray[2] = 'C';
		std::cout << "Content of char array: " << charArray[0] << charArray[1] << charArray[2] << std::endl;
		std::cout << "Trying to access charArray[3] (out of range)..." << std::endl;
		charArray[3] = 'D'; // This should throw an exception
	}
	catch(std::exception& e)
	{
		std::cerr << "Caught error: " << e.what() << '\n';
	}
	
	return (0);
}