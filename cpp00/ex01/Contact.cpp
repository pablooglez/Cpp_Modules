/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:49:49 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/12 18:46:30 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#pragma region "Constructor"

	Contact::Contact()
	{
		return ;
	}

	Contact::~Contact()
	{
		return ;
	}

#pragma endregion

#pragma region "Setters & Getters"

	#pragma region "Setters"

		void	Contact::setFirstName(const std::string &_firstname)
		{
			firstname = _firstname;
		}

		void	Contact::setLastName(const std::string &_lastname)
		{
			lastname = _lastname;
		}

		void	Contact::setNickName(const std::string &_nickname)
		{
			nickname = _nickname;
		}

		void	Contact::setPhoneNumber(const std::string &_phone_number)
		{
			phone_number = _phone_number;
		}

		void	Contact::setDarkestSecret(const std::string &_secret)
		{
			darkestSecret = _secret;
		}

	#pragma endregion

	#pragma region "Getters"

		std::string Contact::getFirstName()
		{
			return firstname;
		}

		std::string Contact::getLastName()
		{
			return lastname;
		}

		std::string Contact::getNickName()
		{
			return nickname;
		}

		std::string Contact::getPhoneNumber()
		{
			return phone_number;
		}

		std::string Contact::getDarkestSecret()
		{
			return darkestSecret;
		}

	#pragma endregion

#pragma endregion

#pragma region "Fuctions"

	#pragma region "Is Space STR"

		bool Contact::ft_isspace_str(const std::string text)
		{
			for (size_t i = 0; i < text.size(); ++i)
				if (!isspace(text[i]))
					return (false);
			return (true);
		}

	#pragma endregion

	#pragma region "Get Word"

		static int get_word(std::string title, std::string &value)
		{

			std::cout << title + ": ";
			if (std::cin.eof() || !std::getline(std::cin, value))
			{
				std::cout << std::endl;
				return (1);
			}

			while (value.empty() || Contact::ft_isspace_str(value))
			{
				std::cout << title + " can't be empty!" << std:: endl;
				std::cout << title + ": ";
				if (std::cin.eof() || !std::getline(std::cin, value))
				{
					std::cout << std::endl;
					return (1);
				}
			}

			if (std::cin.eof())
			{
				std::cout << std::endl;
				return (1);
			}

			return (0);
		}

	#pragma endregion

	#pragma region "Add"

		void	Contact::add()
		{

			if (get_word("First Name", firstname))
				return;
			if (get_word("Last Name", lastname))
				return;
			if (get_word("Nickname", nickname))
				return;

			bool isNumber = false;
			while (!isNumber)
			{
				std::cout << "Phone number: ";
				if (!std::getline(std::cin, phone_number))
					return;

				if (phone_number.empty()) {
					std::cout << "Error: Phone number can't be empty." << std::endl;
					continue;
				}

				isNumber = true;
				for (size_t i = 0; i < phone_number.length(); i++)
				{
					if (!isdigit(phone_number[i]))
					{
						isNumber = false;
						break;
					}
				}

				if (!isNumber)
					std::cout << "Error: Only digits allowed (0-9)." << std::endl;
			}

			if (std::cin.eof())
			{
				std::cout << std::endl;
				return;
			}

			if (get_word("Darkest secret", darkestSecret))
				return;

		}

	#pragma endregion

#pragma endregion
