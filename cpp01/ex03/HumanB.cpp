/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:37:33 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/15 21:40:01 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name, Weapon &_weapon)
{
	this->name = _name;
	this->weapon = _weapon;
}

HumanB::HumanB(std::string _name)
{
	this->name = _name;
}

HumanB::~HumanB()
{
	return;
}

void	HumanB::attack()
{
	if (weapon.getType().empty())
		std::cout << this->name << " is unarmed" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}