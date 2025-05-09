/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:22:12 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/31 22:15:16 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
		public:
				Dog();
				Dog(const Dog &obj);
				Dog &operator=(const Dog &obj);
				~Dog();

				void	makeSound() const;
};