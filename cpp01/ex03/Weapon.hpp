/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:37:26 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/18 20:12:21 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
		public:
				Weapon();
				Weapon(std::string new_type);
				~Weapon();
				
				void		setType(std::string const &new_type);
				std::string	getType();

		private:
				std::string type;
};