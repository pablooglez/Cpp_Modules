/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:00:23 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:32:24 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Pepe");
	ClapTrap b("Marta");

	
	a.attack("Enemy1");
	b.attack("Enemy2");

	a.takeDamage(3);
	b.takeDamage(8);

	a.beRepaired(2);
	b.beRepaired(3);

	for (int i = 0; i < 10; i++)
	a.attack("Dummy");
	
	return (0);
}
