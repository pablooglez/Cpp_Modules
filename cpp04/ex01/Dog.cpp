/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:22:58 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 18:53:31 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;

	type = "Dog";
	attribute = new Brain();
}

Dog::Dog (const Dog &obj)
{
	std::cout << "Dog copy constructor called" << std::endl;

	this->type = obj.type;
	attribute = new Brain(*obj.attribute);
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->type = obj.type;
		delete this->attribute;
		attribute = new Brain(*obj.attribute);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete attribute;
}

void	Dog::makeSound()const
{
	std::cout << "Woof!" << std::endl;
}

void	Dog::setIdea(std::string _ideas, int i) const
{
	this->attribute->setIdea(_ideas, i);
}

std::string Dog::getIdea(int i) const
{
	return this->attribute->getIdea(i);
}