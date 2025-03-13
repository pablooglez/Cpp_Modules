/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:31:38 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/13 20:02:11 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i = 0;
	
	Zombie*	horde = new Zombie[N];

	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}