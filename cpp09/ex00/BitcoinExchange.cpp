/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:33:49 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/17 16:57:12 by pablogon         ###   ########.fr       */
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

	(void)inputfile;
	
	dbstream.open(database.c_str());
	filestream.open(database.c_str());

	if (dbstream.fail() || filestream.fail())
	{
		std::cerr << "Error: could not open file." << std::endl;
		exit (1);
	}
	extractDBFile(dbstream);
	//extractInputFile(filestream);
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

/* void	BitcoinExchange::extractInputFile(std::ifstream &filesstream)
{
} */

void	BitcoinExchange::extractDBFile(std::ifstream &dbstream) // Muestra los archivos de entrada y muestra los resultados
{
	std::string line;

	std::getline(dbstream, line);

	while (std::getline(dbstream, line))
	{
		size_t PosSeparator = line.find(',');
		
		if (PosSeparator == std::string::npos)
		{
			std::cerr << "Error: Bad input: " << line << std::endl;
			continue;
		}
		std::string date= line.substr(0, PosSeparator);
		std::string valuestring = line.substr(PosSeparator + 1);

		std::stringstream valueStream(valuestring); // string to double
		double value;
		
		if (!(valueStream >> value) || !valueStream.eof())
		{
			std::cerr << "Error: The value could not be converted to a number: " << line << std::endl;
			continue;
		}
		_database.insert(std::make_pair(date, value));
	}
}