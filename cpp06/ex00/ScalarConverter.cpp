/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:39:10 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/25 20:57:49 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverte constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverte destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	std::cout << "ScalarConverte copy constructor called" << std::endl;

	(void)obj;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &obj)
{
	std::cout << "ScalarConverte copy assignment operator called" << std::endl;
	
	(void)obj;
	return *this;
}


int	getType(std::string str) // (1) -> char ; (2) -> nan, inf ; (3) -> int ; (4) -> double; (5) -> float
{
	// Verifica si es un char
	
	if (str.length() == 1 && !std::isdigit(str[0]))
		return (1);

	// Verifica casos especiales (nan, inf)
	else if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" ||
			str == "-inf" || str == "-inff")
			return (2);

	// Verifica si es int, float o double
	else
	{
		char	*endptr;

		// Intento convertir a entero (base 10)
		std::strtol(str.c_str(), &endptr, 10);

		if (*endptr == '\0')
			return (3);
		
		// Intento convertir a double/float
		strtod(str.c_str(), &endptr);
		if (*endptr == '\0')
			return (4);

		else if ((*endptr == 'F' || *endptr == 'f') && *(endptr + 1) == '\0')
			return (5);
	}
	return (0);	
}


void	ScalarConverter::convert (std::string str)
{
	switch (getType(str))
	{
		case (1):
		{
			std::cout << "char: " << str[0] << std::endl;
			std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(str[0]) << ".0" <<std::endl;
			break;
		}
		case (2)
		{
			
		}
	}
}