/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:51:26 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/05 18:11:29 by pablogon         ###   ########.fr       */
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

void	printCONSTNBR(const int &nbr)
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

	std::cout << "//----- ARRAY OF  CONST-INTS -----//" << std::endl;

	int	array2[] = {1, 2, 3};
	int len2 = sizeof(array2) / sizeof(array2[0]);
	::iter(array2, len2, printCONSTNBR);

	std::cout << "//----- ARRAY OF STRINGS -----//" << std::endl;

	std::string array3[] = {"Pablo", "Jose", "Ana"};
	int len3 = sizeof(array3) / sizeof(array3[0]);
	::iter(array3, len3, printSTR);

	std::cout << "//----- ARRAY OF CHAR -----//" << std::endl;

	char array4[] = {'a', 'b', 'c'};
	int len4 = sizeof(array4) / sizeof(array4[0]);
	::iter(array4, len4, printCHAR);
	
	std::cout << "//----- TEST WITH NULL ARRAY -----//" << std::endl;

	int *nullArray = NULL;
	::iter(nullArray, 3, printNBR);
	
	std::cout << "//----- TEST WITH NEGATIVE LENGTH -----//" << std::endl;

	int negativeTest[] = {1, 2, 3};
	::iter(negativeTest, -2, printNBR);
	
	return (0);
}