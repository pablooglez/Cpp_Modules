/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:33:49 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/13 17:45:31 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	//std::cout << "BitcoinExchange constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	//std::cout << "BitcoinExchange destructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const std::string &database, const std::string &inputfile)
{
	std::ifstream dbstream;
	std::ifstream filestream;

	dbstream.open(database.c_str());
	filestream.open(database.c_str());

	if (dbstream.fail() || filestream.fail())
	{
		std::cerr << "Error: could not open file." << std::endl;
		exit (1);
	}
	extractDBFile(dbstream);
	extractInputFile(filestream);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
	//std::cout << "BitcoinExchange copy constructor called" << std::endl;

	this->_database = obj._database;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	//std::cout << "BitcoinExchange copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->_database = obj._database;
	}
	return (*this);
}

void	BitcoinExchange::extractInputFile(std::ifstream &filesstream)
{
	
}

void	BitcoinExchange::extractDBFile(std::ifstream &dbstream)
{
	
}