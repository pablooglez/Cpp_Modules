/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:33:47 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/26 19:39:00 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream> // cout, cin, cerr
#include <string> // std::stringstream
#include <fstream> //std::ifstream , open
#include <sstream>
#include <map> // std::map
#include <cstdlib> // exit, EXIT_FAILURE, EXIT_SUCCESS, atoi

class BitcoinExchange
{
	private:
			std::map<std::string, double> _database;

	public:
			BitcoinExchange();
			~BitcoinExchange();
			BitcoinExchange(const std::string &database, const std::string &inputfile);
			BitcoinExchange(const BitcoinExchange &obj);
			BitcoinExchange &operator=(const BitcoinExchange &obj);

			void	extractInputFile(std::ifstream &filestream);
			void	extractDBFile(std::ifstream &dbstream);
};
