/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:00:23 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:34:06 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap diamond1("Pepe");

	
	diamond1.attack("Enemy1");
	diamond1.takeDamage(80);
	diamond1.beRepaired(20);

	diamond1.guardGate();
	diamond1.highFivesGuys();
	diamond1.whoAmI();

	return (0);
}
