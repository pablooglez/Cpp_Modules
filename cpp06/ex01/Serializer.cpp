/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:30:57 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/29 19:48:58 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Seralizer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer constructor called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
}

Serializer::Serializer(const Serializer &obj)
{
	std::cout << "Serializer copy constructor called" << std::endl;

	(void)obj;
}

Serializer	&Serializer::operator=(const Serializer &obj)
{
	std::cout << "Serializer copy assignment operator called" << std::endl;
	
	(void)obj;
	return *this;
}

uintptr_t	Serializer::serializer(Data* ptr)
{
	
}
