/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:32:02 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 19:38:00 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;

	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;

	this->type = obj.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal default sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
