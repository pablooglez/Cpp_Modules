/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:22:58 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 14:48:14 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;

	type = "Dog";
}

Dog::Dog (const Dog &obj)
{
	std::cout << "Dog copy constructor called" << std::endl;

	this->type = obj.type;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound()const
{
	std::cout << "Woof!" << std::endl;
}