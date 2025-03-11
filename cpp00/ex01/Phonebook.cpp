/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:50:25 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/11 12:05:36 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

#pragma region "Constructor"

	PhoneBook::PhoneBook()
	{
		current_contacts = 0;
		oldest_contacts = 0;
	}

	PhoneBook::~PhoneBook()
	{
		return ;
	}

#pragma endregion

#pragma region "Contact"

	#pragma region "Get"

		int	PhoneBook::getCurrentContacts() const
		{
			return current_contacts;
		}

	#pragma endregion

	#pragma region "Add"

		void	PhoneBook::addContact()
		{
			Contact new_contact;
			
			new_contact.add();

			if (current_contacts < 8)
			{
				list[current_contacts] = new_contact;
				current_contacts++;
			}
			else
			{
				list[oldest_contacts] = new_contact;
				oldest_contacts = (oldest_contacts + 1) % 8;
			}
		}

	#pragma endregion

	#pragma region "Display"

		#pragma region "Truncate"

			static std::string truncate(std::string text)
			{
				for (size_t i = 0; i < text.size(); ++i)
					if (text[i] == '\t') text[i] = ' ';

				if (text.length() > 10)
				{
					std::string new_text;
					size_t	i, j;

					for (i = 0; i < text.size() && isspace(text[i]); ++i);
					for (j = text.size() - 1; j > i && isspace(text[j]); --j);

					new_text += text.substr(i, j - i);

					if (new_text.size() > 10) 
						new_text = new_text.substr(0, 9) + ".";

					return (new_text);
				}

				return (text);
			}

		#pragma endregion

		#pragma region "Display"

			void PhoneBook::displayContacts()
			{
				int	i;

				i = 0;

				std::cout << std::endl;
				std::cout << "| Index | First Name  | Last Name   | Nickname    |" << std::endl;
				std::cout << "|-------|-------------|-------------|-------------|" << std::endl;

				while (i < current_contacts)
				{
					std::cout << "|" << std::setw(7) << std::left << i << "|"
						<< std::setw(13) << std::left << truncate(list[i].getFirstName()) << "|"
						<< std::setw(13) << std::left << truncate(list[i].getLastName()) << "|"
						<< std::setw(13) << std::left << truncate(list[i].getNickName()) << "|" << std::endl;
					i++;
				}
			}

	#pragma endregion

	#pragma endregion

	#pragma region "Details"

		void	PhoneBook::ContactDetails(int index)
		{
			if (index < 0 || index >= current_contacts)
			{
				std::cout << "Error: Invalid Index" << std::endl;
				return ;
			}

			std::cout << std::endl;
			std::cout << "Name: " << list[index].getFirstName() << std::endl;
			std::cout << "LastName: " << list[index].getLastName() << std::endl;
			std::cout << "NickName: " << list[index].getNickName() << std::endl;
			std::cout << "PhoneNumber: " << list[index].getPhoneNumber() << std::endl;
			std::cout << "DarkestSecret: " << list[index].getDarkestSecret() << std::endl;
			std::cout << std:: endl;
		}

	#pragma endregion

#pragma endregion
