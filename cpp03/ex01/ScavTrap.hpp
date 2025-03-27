/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:32:07 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:32:50 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
		public:
				ScavTrap();
				ScavTrap(std::string name);
				ScavTrap(const ScavTrap &obj);
				ScavTrap &operator=(const ScavTrap &obj);
				~ScavTrap();

				void	guardGate();
				void	attack(const std::string &target);
};
