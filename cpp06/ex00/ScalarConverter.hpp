/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:39:13 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/28 11:14:29 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib> // atoi, atof, strtol, strtod, strtof
#include <limits> // std::numeric_limits
#include <cctype> // isprint, isdigit
#include <cmath> // isnan, isinf

class ScalarConverter
{
	private:
			ScalarConverter();
			~ScalarConverter();
			ScalarConverter(const ScalarConverter &obj);
			ScalarConverter &operator=(const ScalarConverter &obj);

	public:
			static void convert (std::string string);
};