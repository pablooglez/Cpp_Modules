/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:28:21 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/13 20:04:46 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	i;
	int	N;
	
	N = 2;
	i = 0;
	
	Zombie* horde = zombieHorde(N, "horde");
	Zombie *alianza = zombieHorde(N, "Ally");
	
	std::cout << "Nombre Array Horde" << std::endl;
	while(i < N)
	{
		horde[i].announce();
		i++;
	}
	
	//cambia el nombre a todos de la Horde
	i = 0;
	while (i < N)
	{
		horde[i].setName("Shammy");
		i++;
	}
	
	i = 0;
	std::cout << "Nombre del array de horde cambiando nombre a shammy" << std::endl;
	while(i < N)
	{
		horde[i].announce();
		i++;
	}
	
	i = 0;
	std::cout << "Nombre array Ally" << std::endl;
	while(i < N)
	{
		alianza[i].announce();
		i++;
	}
	
	//cambia el nombre a todos de la Ally
	i = 0;
	while (i < N)
	{
		alianza[i].setName("Paladin");
		i++;
	}
	
	std::cout << "Nombre del array de Alianza cambiando nombre a Paladin" << std::endl;
	i = 0;
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