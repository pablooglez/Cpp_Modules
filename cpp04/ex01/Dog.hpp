/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:22:12 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 18:54:38 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
		public:
				Dog();
				Dog(const Dog &obj);
				Dog &operator=(const Dog &obj);
				~Dog();

				void	makeSound() const;

				void				setIdea(std::string _ideas, int i) const;
				std::string			getIdea(int i) const;

		private:
				Brain* attribute;
};