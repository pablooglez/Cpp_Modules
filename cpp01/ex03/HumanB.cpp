/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:37:33 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/18 20:48:02 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "HumanB created" << std::endl;
}

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	std::cout << "HumanB created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destroyed" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	if (!weapon)
	{
		std::cout << this->name << ": has not a weapon to attack" << std::endl;
		return;
	}
	std::cout << this->name << ": attacks with their: " << weapon->getType() << std::endl;
}
