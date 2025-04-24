/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:39:13 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/24 16:24:24 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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