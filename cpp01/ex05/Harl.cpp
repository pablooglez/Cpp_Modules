/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:01:36 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/19 17:43:43 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	return;
}

// Método que toma un nivel como argumento

void	Harl::complain(std::string level)
{
	std::string function[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};		//Array de strings con los nombres de los niveles

	void(Harl::*ptrfc[4])()= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};		//Array de punteros a funciones miembros de la clase Harl

	if (level == "DEBUG")
		return (this->*ptrfc[0])();
	else if (level == "INFO")
		return (this->*ptrfc[1])();
	else if (level == "WARNING")
		return (this->*ptrfc[2])();
	else if (level == "ERROR")
		return (this->*ptrfc[3])();
	else
	std::cout << " Error: Insert correct level: DEBUG | INFO | WARNING | ERROR" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}