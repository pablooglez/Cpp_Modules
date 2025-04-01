/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:23:05 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 19:38:53 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;

	type = "Animal";
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor called" << std::endl;

	this->type = obj.type;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound()const
{
	std::cout << "Animal default sound!" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
