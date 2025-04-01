/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:05:50 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 18:55:03 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
		public:
				Cat();
				Cat(const Cat &obj);
				Cat &operator=(const Cat &obj);
				~Cat();

				void	makeSound() const;

				void				setIdea(std::string _ideas, int i) const;
				std::string			getIdea(int i) const;

			private:
				Brain* attribute;
};