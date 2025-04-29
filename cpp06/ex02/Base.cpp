/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:11:11 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/29 22:09:07 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout << "Base destructor called" << std::endl;
}

Base	*generate(void)
{
	srand(time(0));

	int i = rand() % 3;

	switch (i)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Class type is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class type is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class type is C" << std::endl;
	else
		std::cout << "Base has not a correct type" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Class type is A" << std::endl;
		return;
	}
	catch(const std::exception& e){}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Class type is B" << std::endl;
		return;
	}
	catch(const std::exception& e){}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Class type is C" << std::endl;
		return;
	}
	catch(const std::exception& e){}

	std::cerr << "Error: Base has not a correct type" << std::endl;
}