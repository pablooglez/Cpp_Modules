/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:49:49 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/06 20:39:03 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// ----------------------------------------------
// CONSTRUCTOR Y DESTRUCTOR
// ----------------------------------------------

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

// ----------------------------------------------
// (SETTERS). Una llave que guarda un dato específico en la ficha
// ----------------------------------------------

void	Contact::setFirstName(const std::string &firstname)
{
	this->firstname = firstname;
}

void	Contact::setLastName(const std::string &lastname)
{
	this->lastname = lastname;
}

void	Contact::setNickName(const std::string &nickname)
{
	this->nickname = nickname;
}

void	Contact::setPhoneNumber(const std::string &phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::setDarkestSecret(const std::string &secret)
{
	this->darkestSecret = secret;
}

// ----------------------------------------------
// (GETTERS). Cada getter es como una ventana que permite ver un dato específico de una ficha
// ----------------------------------------------

std::string Contact::getFirstName()
{
	return this->firstname;
}

std::string Contact::getLastName()
{
	return this->lastname;
}

std::string Contact::getNickName()
{
	return this->nickname;
}

std::string Contact::getPhoneNumber()
{
	return this->phone_number;
}

std::string Contact::getDarkestSecret()
{
	return this->darkestSecret;
}

void	Contact::initialize()
{
	// Pedir el nombre
	std::cout << "First name: ";
	std::getline(std::cin, this->firstname);

	//Si el nombre esta vacio,insiste en que se ingrese algo
	while (this->firstname.empty())
	{
		std::cout << "Name can't be empty!" << std:: endl;
		if (!std::getline(std::cin, this->firstname))
			break;
	}

	std::cout << "Last name: ";
	std::getline(std::cin, this->lastname);
	while (this->lastname.empty())
	{
		std::cout << "Last name can't be empty!" << std::endl;
		if (!std::getline(std::cin, this->lastname))
			break;
	}

	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
	while (this->nickname.empty())
	{
		std::cout << "Nickname can't be empty!" << std::endl;
		if (!std::getline(std::cin, this->nickname))
			break;
	}

	bool isNumber = false;
	while (!isNumber)
	{
		std::cout << "Phone number: ";
		if (!std::getline(std::cin, this->phone_number))
			break;
		
		// Verificar si es vacío
		if (this->phone_number.empty()) {
			std::cout << "Error: Phone number can't be empty." << std::endl;
			continue;
		}

		// Verificar si todos son dígitos
		isNumber = true;
		for (size_t i = 0; i < this->phone_number.length(); i++)
		{
			if (!isdigit(this->phone_number[i]))
			{
				isNumber = false;
				break;
			}
		}

		// Mensaje de error si hay caracteres no numéricos
		if (!isNumber)
			std::cout << "Error: Only digits allowed (0-9)." << std::endl;
	}

	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->darkestSecret);
	while (this->darkestSecret.empty())
	{
		std::cout << "Darkest Secret can't be empty!" << std::endl;
		if (!std::getline(std::cin, this->darkestSecret))
			break;
	}
}