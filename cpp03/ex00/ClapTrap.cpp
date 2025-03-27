/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:00:32 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:32:15 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;

	_name = "Default";
	_hit = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap default name constructor called" << std::endl;
	_name = name;
	_hit = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	
	this->_name = obj._name;
	this->_hit = obj._hit;
	this->_energy = obj._energy;
	this->_attack = obj._attack;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit = obj._hit;
		this->_energy = obj._energy;
		this->_attack = obj._attack;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energy > 0 && _hit > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
		_energy = _energy - 1;
	}
	else if (_energy <= 0 && _hit <= 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't have energy and hit points!" << std::endl;
	}
	else if (_energy <= 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't have energy points!" << std::endl;
	}
	else if (_hit <= 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't have hit points!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_energy > 0 && _hit > 0)
	{
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage" << std::endl;
		if (amount >= _hit)
			_hit = 0;
		else
			_hit = _hit - amount;
	}
	else if (_energy <= 0 && _hit <= 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't have energy and hit points!" << std::endl;
	}
	else if (_energy <= 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't have energy points!" << std::endl;
	}
	else if (_hit <= 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't have hit points!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0 && _hit > 0)
	{
		std::cout << "ClapTrap " << _name << " repairs " << amount << " points of hit!" << std::endl;
		_energy = _energy - 1;
	}
	else if (_energy <= 0 && _hit <= 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't have energy and hit points!" << std::endl;
	}
	else if (_energy <= 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't have energy points!" << std::endl;
	}
	else if (_hit <= 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't have hit points!" << std::endl;
	}
}
