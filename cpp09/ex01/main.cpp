/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:50:06 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/11 12:06:14 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

#pragma region "Right trim"

	std::string	r_trim(std::string text)
	{
		size_t i;

		for (i = text.size() - 1; i > 0 && isspace(text[i]); --i);
		return (text.substr(0, i + 1));
	}
	
#pragma endregion

#pragma region "Main"

	int	main(int argc, char **argv)
	{
		PhoneBook	book;
		std::string	command;
		bool		running = 1;

		(void)argv;

		if (argc != 1)
			return (0);

		while (running)
		{
			std::cout << "Insert a command: | ADD | SEARCH | EXIT" << std::endl;

			command = "";
			while (command.empty())
			{
				if (!std::getline(std::cin, command))
					running = 0;
				if (command.empty() || Contact::ft_isspace_str(command)) std::cout << "\033[A";
			}

			if (r_trim(command) == "ADD")
				book.addContact();

			else if (r_trim(command) == "SEARCH")
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
					std::cout << std::endl;
					std::cout << "EOF detected. Exiting..." << std::endl;
					return (1);
				}

				if (std::cin.eof())
				{
					std::cout << std::endl;
					std::cout << "EOF detected. Exiting..." << std::endl;
					return (1);
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

			else if (r_trim(command) == "EXIT")
				break;

			else
				std::cout << "Invalid command!" << std::endl;

			if (std::cin.eof() || running == 0)
			{
				std::cout << "EOF detected. Exiting..." << std::endl;
				return (0);
			}
		}

		return (0);
	}

#pragma endregion
