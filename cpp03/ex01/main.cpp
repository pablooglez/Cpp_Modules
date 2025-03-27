/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:00:23 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:32:41 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap scav1("Pepe");

	
	scav1.attack("Enemy1");

	scav1.guardGate();

	scav1.takeDamage(80);
	scav1.beRepaired(20);

	return (0);
}
