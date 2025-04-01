/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:21:45 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 18:28:56 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor called" << std::endl;

	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
}

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Brain copy assignment operator called" << std::endl;

	(void)obj;
	
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdea(const std::string _ideas, int i)
{
	if (i >= 0 && i < 100)
	{
		this->ideas[i] = _ideas;
	}
}

std::string Brain::getIdea(int i)
{
	if (i >= 0 && i < 100)
	{
		return this->ideas[i];
	}
	return NULL;
}