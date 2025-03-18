/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:37:15 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/18 20:12:14 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return;
}

Weapon::Weapon(std::string new_type)
{
	this->type = new_type;
}
Weapon::~Weapon()
{
	return;
}

void	Weapon::setType(std::string const &new_type)
{
	this->type = new_type;
}

std::string Weapon::getType()
{
	return(this->type);
}

