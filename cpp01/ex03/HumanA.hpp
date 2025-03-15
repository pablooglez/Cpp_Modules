/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:37:35 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/15 21:26:26 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	public:
			HumanA(std::string _name, Weapon &_weapon);
			~HumanA();

			void	attack();
	private:
			std::string name;
			Weapon weapon();
};
