/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:50:06 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/06 19:58:47 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(int argc, char **argv)
{
	PhoneBook book;
	std::string command;

	(void)argv;

	if (argc != 1)
		return (0);
	
	while (true)
	{
		std::cout << "Insert a command: | ADD | SEARCH | EXIT" << std::endl;
		if (!std::getline(std::cin, command))
		{
			std::cout << "EOF detected. Exiting..." << std::endl;
			break;
		}
		if (command == "ADD")
			book.addContact();
		else if (command == "SEARCH")
		{
			book.displayContacts();
			
			if (book.getCurrentContacts() == 0)
			{
				std::cout << "The book is empty. Use ADD first." << std::endl;
				std::cout << std::endl;
				continue;
			}

			std::cout << "Contact Index: " << std:: endl;
			std::string command;
			if (!std::getline(std::cin, command))
			{
				std::cout << "EOF detected. Exiting..." << std::endl;
				break;
			}
			bool isNumber = true;
			for (size_t i = 0; i < command.length(); i++)
			{
				if (!isdigit(command[i]))
				{
					isNumber = false;
					break;
				}
			}
			if (!isNumber || command.empty())
				std::cout << "Error: You must enter a number" << std::endl;
			else
			{
				int	index = std::atoi(command.c_str());
				if (index >= 0 && index < book.getCurrentContacts())
				{
					book.ContactDetails(index);
				}
				else
					std::cout << "Error: Index out of range" << std::endl;
			}
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}