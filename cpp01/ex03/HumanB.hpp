/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:37:31 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/18 20:33:34 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
		public:
				HumanB();
				HumanB(std::string name);
				~HumanB();

				void	attack();
				void	setWeapon(Weapon &weapon);
		private:
				std::string name;
				Weapon *weapon;
};