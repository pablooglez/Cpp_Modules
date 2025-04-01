/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:20:29 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 14:46:17 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
		public:
				WrongCat();
				WrongCat(const WrongCat &obj);
				WrongCat &operator=(const WrongCat &obj);
				~WrongCat();

				void	makeSound() const;
};