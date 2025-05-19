/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:33:49 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/17 18:00:25 by pablogon         ###   ########.fr       */
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
	filestream.open(inputfile.c_str());

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

void	BitcoinExchange::extractInputFile(std::ifstream &filestream) // Proceso el archivo de entrada del usuario
{
	std::string line;

	std::getline(filestream, line);
	
	// Procesar cada línea del archivo de entrada
	while (std::getline(filestream, line))
	{
		// Validar línea vacía
		if (line.empty())
		{
			std::cerr << "Error: empty line." << std::endl;
			continue;
		}

		size_t PosSeparator = line.find(" | ");
		if (PosSeparator == std::string::npos)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}

		std::string dateStr = line.substr(0, PosSeparator);
		std::string valueStr = line.substr(PosSeparator + 3); // +3 para saltar ' | '

		std::stringstream valueStream(valueStr);
		float value;
		
		if (!(valueStream >> value) || !valueStream.eof())
		{
			std::cerr << "Error: not a valid number." << std::endl;
			continue;
		}

		if (value < 0)
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue;
		}
		if (value > 1000)
		{
			std::cerr << "Error: too large a number." << std::endl;
			continue;
		}

		std::map<std::string, double>::iterator it = _database.lower_bound(dateStr);
		
		// Verificar si no encontramos ninguna fecha
		if (it == _database.end())
		{
			std::cerr << "Error: no data available for date " << dateStr << std::endl;
			continue;
		}
		
		// Si la fecha no es exactamente la que buscamos, retrocedemos para obtener la anterior
		if (it->first != dateStr)
		{
			// Pero solo si no estamos al principio del mapa
			if (it == _database.begin())
			{
				std::cerr << "Error: no data available for date " << dateStr << std::endl;
				continue;
			}
			it--;
		}
		
		std::cout << dateStr << " => " << value << " = " << value * it->second << std::endl;
	}
}

void	BitcoinExchange::extractDBFile(std::ifstream &dbstream) // Muestra los archivos de entrada y muestra los resultados
{
	std::string line;

	std::getline(dbstream, line);

	while (std::getline(dbstream, line))
	{
		size_t PosSeparator = line.find(',');
		
		if (PosSeparator == std::string::npos)
		{
			std::cerr << "Error: Bad input => " << line << std::endl;
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

