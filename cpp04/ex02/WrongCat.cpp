/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:20:02 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 19:37:53 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;

	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;

	this->type = obj.type;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat copy assignmet operator called" << std::endl;

	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meow sound!" << std::endl;
}
