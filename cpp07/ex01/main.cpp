/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:51:26 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/02 18:10:09 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	printSTR(std::string &str)
{
	std::cout << str << std::endl;
}

void	printNBR(int &nbr)
{
	std::cout << nbr << std::endl;
}

void	printCHAR(char &c)
{
	std::cout << c << std::endl;
}

int main()
{
	std::cout << "//----- ARRAY OF INTS -----//" << std::endl;

	int	array1[] = {1, 2, 3};
	int len = sizeof(array1) / sizeof(array1[0]);
	::iter(array1, len, printNBR);

	std::cout << "//----- ARRAY OF STRINGS -----//" << std::endl;

	std::string array2[] = {"Pablo", "Jose", "Ana"};
	int len2 = sizeof(array2) / sizeof(array2[0]);
	::iter(array2, len2, printSTR);

	std::cout << "//----- ARRAY OF CHAR -----//" << std::endl;

	char array3[] = {'a', 'b', 'c'};
	int len3 = sizeof(array3) / sizeof(array3[0]);
	::iter(array3, len3, printCHAR);
	
	std::cout << "//----- TEST WITH NULL ARRAY -----//" << std::endl;

	int *nullArray = NULL;
	::iter(nullArray, 3, printNBR);
	
	std::cout << "//----- TEST WITH NEGATIVE LENGTH -----//" << std::endl;

	int negativeTest[] = {1, 2, 3};
	::iter(negativeTest, -2, printNBR);
	
	return (0);
}