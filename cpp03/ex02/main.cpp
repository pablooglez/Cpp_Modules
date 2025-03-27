/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:00:23 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:33:16 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap frag1("Pepe");

	
	frag1.attack("Enemy1");

	frag1.highFivesGuys();

	frag1.takeDamage(80);
	frag1.beRepaired(20);

	return (0);
}
