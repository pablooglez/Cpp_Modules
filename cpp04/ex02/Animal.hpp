/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:22:30 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 19:39:27 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
		public:
				Animal();
				Animal(const Animal &obj);
				Animal &operator=(const Animal &obj);
				virtual ~Animal();
	
				virtual void	makeSound() const = 0;
				std::string getType() const;

				
		protected:
				std::string type;
};
