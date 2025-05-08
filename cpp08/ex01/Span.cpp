/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:26:29 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/08 13:36:13 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Span constructor called" << std::endl;

	this->_N = 0;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

Span::Span(unsigned int n)
{
	std::cout << "Span constructor with size " << n << " called" << std::endl;

	this->_N = n;
}

Span::Span(const Span &obj)
{
	std::cout << "Span copy constructor called" << std::endl;

	*this = obj;
}

Span &Span::operator=(const Span &obj)
{
	std::cout << "Span copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->_N = obj._N;
		this->_container = obj._container;
	}
	return (*this);
}

