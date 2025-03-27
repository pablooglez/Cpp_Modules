/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:36:16 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:33:13 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

#include <iostream>

class FragTrap : public ClapTrap
{
		public:
				FragTrap();
				FragTrap(std::string name);
				FragTrap(const FragTrap &obj);
				FragTrap &operator=(const FragTrap &obj);
				~FragTrap();

				void	highFivesGuys(void);
				void	attack(const std::string &target);
};
