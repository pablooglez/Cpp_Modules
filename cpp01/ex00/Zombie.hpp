/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:31:27 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/13 14:15:01 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>

class Zombie
{
	public:
			Zombie();
			~Zombie();

			void	announce (void) const;

	private:
			std::string name;
};
