/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:31:35 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/14 18:40:09 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "default";
}

Zombie::~Zombie()
{
	std::cout << this->name << ": Delete Zombie" << std::endl;
}

void	Zombie::announce (void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string &new_name)
{
	this->name = new_name;
}

std::string	Zombie::getName()
{
	return (this->name);
}
