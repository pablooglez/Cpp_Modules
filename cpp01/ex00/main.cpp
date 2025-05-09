/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:31:14 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/14 18:40:45 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie a;

	a.announce();
	
	randomChump("Pipi");
	
	Zombie	*i = newZombie("Pepe");
	Zombie	*j = newZombie("Popo");

	i->announce();
	j->announce();

	delete	j;
	delete	i;

	return (0);
}
