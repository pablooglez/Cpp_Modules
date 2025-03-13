/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:31:20 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/13 20:02:19 by pablogon         ###   ########.fr       */
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

			void		announce (void) const;
			void		setName(std::string const &new_name);
			std::string	getName();
	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);