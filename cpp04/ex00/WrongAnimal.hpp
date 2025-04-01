/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:32:11 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 14:34:29 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
		public:
				WrongAnimal();
				WrongAnimal(const WrongAnimal &obj);
				WrongAnimal &operator=(const WrongAnimal &obj);
				~WrongAnimal();

				void	makeSound() const;
				std::string getType() const;

		protected:
				std::string type;
};