/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:39:10 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/24 16:24:48 by pablogon         ###   ########.fr       */
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

