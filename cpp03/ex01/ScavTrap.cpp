/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:31:52 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:32:46 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;

	_hit = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap default name constructor called" << std::endl;
	
	_hit = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;

	this->_name = obj._name;
	this->_hit = obj._hit;
	this->_energy = obj._energy;
	this->_attack = obj._attack;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit = obj._hit;
		this->_energy = obj._energy;
		this->_attack = obj._attack;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (_hit > 0)
	{
		std::cout << _name << " is now in Gate keeper mode!" << std::endl;
	}
	else
	{
		std::cout << _name << " doesn't have hit points to be in Gate keeper" << std::endl;
	}
}

void	ScavTrap::attack(const std::string &target)
{
	if (_energy > 0 && _hit > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
		_energy = _energy - 1;
	}
	else if (_energy <= 0 && _hit <= 0)
	{
		std::cout << "ScavTrap " << _name << " doesn't have energy and hit points!" << std::endl;
	}
	else if (_energy <= 0)
	{
		std::cout << "ScavTrap " << _name << " doesn't have energy points!" << std::endl;
	}
	else if (_hit <= 0)
	{
		std::cout << "ScavTrap " << _name << " doesn't have hit points!" << std::endl;
	}
}
