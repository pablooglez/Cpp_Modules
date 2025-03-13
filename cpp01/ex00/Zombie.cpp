/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:31:35 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/13 18:27:08 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#pragma region "Constructor y Destructor"

	#pragma region "Constructor"
	
		Zombie::Zombie()
		{
			this->name = "default";
		};
		
	#pragma endregion

	#pragma region "Destructor"
		
		Zombie::~Zombie()
		{
			std::cout << this->name << ": Delete Zombie" << std::endl;
		}
		
	#pragma endregion
	
#pragma endregion

#pragma region "Setter"

	void	Zombie::setName(const std::string &new_name)
	{
		this->name = new_name;
	}

#pragma endregion

#pragma region "Getter"

	std::string	Zombie::getName()
	{
		return (this->name);
	}

#pragma endregion

#pragma region "Announce"

	void	Zombie::announce (void) const
	{
		std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}

#pragma endregion
