/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:36:03 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/27 20:33:59 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;

	_hit = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(std::string name) :  ClapTrap(name)
{
	std::cout << "FragTrap default name constructor called" << std::endl;
	
	_hit = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;

	this->_name = obj._name;
	this->_hit = obj._hit;
	this->_energy = obj._energy;
	this->_attack = obj._attack;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit = obj._hit;
		this->_energy = obj._energy;
		this->_attack = obj._attack;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << " FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (_hit > 0)
	{
		std::cout << _name << " request a positive high fives!" << std::endl;
	}
	else
	{
		std::cout << _name << " doesn't have hit points to request a positive high fives" << std::endl;
	}
}

void	FragTrap::attack(const std::string &target)
{
	if (_energy > 0 && _hit > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
		_energy = _energy - 1;
	}
	else if (_energy <= 0 && _hit <= 0)
	{
		std::cout << "FragTrap " << _name << " doesn't have energy and hit points!" << std::endl;
	}
	else if (_energy <= 0)
	{
		std::cout << "FragTrap " << _name << " doesn't have energy points!" << std::endl;
	}
	else if (_hit <= 0)
	{
		std::cout << "FragTrap " << _name << " doesn't have hit points!" << std::endl;
	}
}
