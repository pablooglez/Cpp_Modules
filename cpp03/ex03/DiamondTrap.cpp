/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 20:03:25 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:26:09 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;

	_name = "Default";
	_hit = 100;
	_energy = 50;
	_attack = 20;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap default name constructor called" << std::endl;

	_name = name;
	_hit = 100;
	_energy = 50;
	_attack = 20;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;

	this->_name = obj._name;
	this->_hit = obj._hit;
	this->_energy = obj._energy;
	this->_attack = obj._attack;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit = obj._hit;
		this->_energy = obj._energy;
		this->_attack = obj._attack;
	}
	return *this;
}

void	DiamondTrap::whoAmI()
{
	if (_hit > 0)
	{
		std::cout << "DiamondTrap's name is " << _name << "." << std::endl;
		std::cout << "ClapTrap's name is " << ClapTrap::_name << "." << std::endl;
	}
	else
	{
		std::cout << "DiamonTrap" << _name << " doesn't have hit points to display it's name." << std::endl;
	}
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
