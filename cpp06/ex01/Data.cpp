/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:44:27 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/29 19:49:18 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	this->_name = "Default";

	std::cout << "Data constructor called" << std::endl;
}

Data::~Data()
{
	std::cout << "Data destructor called" << std::endl;
}

Data::Data(const Data &obj)
{
	std::cout << "Data copy constructor called" << std::endl;

	(void)obj;
}

Data	&Data::operator=(const Data &obj)
{
	std::cout << "Data copy assignment operator called" << std::endl;
	
	(void)obj;
	return *this;
}