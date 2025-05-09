/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:28:21 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/19 18:04:09 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	i;
	int	N;
	
	i = 0;
	N = 2;
	
	Zombie* horde = zombieHorde(N, "Horde");
	Zombie *alianza = zombieHorde(N, "Ally");
	
	std::cout << "Name array Horde" << std::endl;
	while(i < N)
	{
		horde[i].announce();
		i++;
	}

	i = 0;
	std::cout << "Name array Ally" << std::endl;
	while(i < N)
	{
		alianza[i].announce();
		i++;
	}

	std::cout << "Delete horde" << std::endl;
	delete[] horde;
	
	std::cout << "Delete Alianza" << std::endl;
	delete[] alianza;
}