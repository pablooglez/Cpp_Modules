/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 20:03:39 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:33:55 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
		public:
				DiamondTrap();
				DiamondTrap(std::string name);
				DiamondTrap(const DiamondTrap &obj);
				DiamondTrap &operator = (const DiamondTrap &obj);

				void	whoAmI();
				void	attack(const std::string &target);

		private:
				std::string _name;
};
