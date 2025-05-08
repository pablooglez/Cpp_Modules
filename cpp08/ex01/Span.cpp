/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:26:29 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/08 20:36:21 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	//std::cout << "Span constructor called" << std::endl;

	this->_N = 0;
}

Span::~Span()
{
	//std::cout << "Span destructor called" << std::endl;
}

Span::Span(unsigned int n)
{
	//std::cout << "Span constructor with size " << n << " called" << std::endl;

	this->_N = n;
}

Span::Span(const Span &obj)
{
	//std::cout << "Span copy constructor called" << std::endl;

	*this = obj;
}

Span &Span::operator=(const Span &obj)
{
	//std::cout << "Span copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->_N = obj._N;
		this->_container = obj._container;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (_container.size() >= _N)
	{
		throw std::runtime_error("Can't add more numbers, container is full");
	}
	_container.push_back(n);
}

unsigned int	Span::shortestSpan()
{
	if (_container.size() <= 1)
	{
		throw std::runtime_error("Can't calculate shortestSpan, need at least 2 elements");
	}

	std::vector<int> sortedspan = this->_container;
	std::sort(sortedspan.begin(), sortedspan.end());

	int ret = sortedspan[1] - sortedspan[0];
	for (int i = 0; i < (int)this->_container.size() - 1; i++)
	{
		if (sortedspan[i + 1] - sortedspan[i] < ret)
			ret = (sortedspan[i + 1] - sortedspan[i]);
	}
	return (ret);
}

unsigned int	Span::longestSpan()
{
	if (_container.size() <= 1)
	{
		throw std::runtime_error("Can't calculate longestSpan, need at least 2 elements");
	}

	std::vector<int> longedspan = this->_container;

	std::sort(longedspan.begin(), longedspan.end());
	int ret = longedspan.back() - longedspan[0];
	return (ret);
}