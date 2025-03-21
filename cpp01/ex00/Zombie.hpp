/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:31:27 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/19 18:18:43 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
	public:
			Zombie();
			~Zombie();

			void			announce (void) const;
			void			setName(std::string const &new_name);
			std::string		getName();

	private:
			std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
