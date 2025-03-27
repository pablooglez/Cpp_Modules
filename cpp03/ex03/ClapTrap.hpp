/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:00:42 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:33:48 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
		public:
				ClapTrap();
				ClapTrap(std::string name);
				ClapTrap(const ClapTrap &obj);
				ClapTrap &operator = (const ClapTrap &obj);
				~ClapTrap();

				void	attack(const std::string &target);
				void	takeDamage(unsigned int amount);
				void	beRepaired(unsigned int amount);

			protected:
					std::string				_name;
					unsigned int			_hit;
					unsigned int			_energy;
					unsigned int			_attack;
};
