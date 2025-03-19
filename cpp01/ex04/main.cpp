/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:40:42 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/19 17:30:54 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // "std::cout", "std::string"
#include <fstream> // Libreria para "std::ifstream", "std::ofstream" , "std::fstream"
#include <sstream> // Libreria para "std::stringstream"
#include <cstdlib> // exit

std::string ReplaceBuffer (std::string filename, std::string s1, std::string s2)
{
	std::ifstream infile(filename.c_str());
	if (infile.fail())
	{
		std::cout << filename << " Error: filename error to open" << std::endl;
		exit(1);
	}
	
	std::stringstream buffer;
	buffer << infile.rdbuf();
	std::string content = buffer.str();
	infile.close();
	
	size_t	pos = content.find(s1);
	while (pos != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos = content.find(s1, pos + s2.length());
	}
	return (content);
}

int	main(int argc, char **argv)
{
	
	if (argc != 4)
	{
		std::cout << " Error: Incorrect number of arguments" << std::endl;
		return (1);
	}
	
	std::string filename = argv[1];
	std::string s1		= argv[2];
	std::string s2		= argv[3];
	
	if (s1.empty() || s2.empty())
	{
		std::cout << " Error: s1 or s2 is empty" << std::endl;
		return (1);
	}
	
	std::string content = ReplaceBuffer(filename, s1, s2);
	std::ofstream outfile((filename + ".replace").c_str());
	if (outfile.fail())
	{
		std::cout << filename << " Error: filename error to closed" << std::endl;
		return(1);
	}
	outfile << content;
	return (0);
}