/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:05:56 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 18:35:31 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;

	type = "Cat";
	attribute = new Brain();
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy constructor called" << std::endl;

	this->type = obj.type;
	attribute = new Brain(*obj.attribute);
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->type = obj.type;
		delete this->attribute;
		attribute = new Brain(*obj.attribute);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete attribute;
}

void	Cat::makeSound() const
{
	std::cout << "Miau!" << std::endl;
}

void	Cat::setIdea(std::string _ideas, int i) const
{
	this->attribute->setIdea(_ideas, i);
}

std::string Cat::getIdea(int i) const
{
	return attribute->getIdea(i);
}