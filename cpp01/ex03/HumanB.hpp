/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:37:31 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/15 21:24:14 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public:
			HumanB(std::string _name, Weapon &_weapon);
			HumanB(std::string _name);
			~HumanB();

			void	attack();
	private:
			std::string name;
			Weapon &weapon;
};