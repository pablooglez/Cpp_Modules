/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:50:25 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/06 20:41:30 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// ----------------------------------------------
// CONSTRUCTOR Y DESTRUCTOR
// ----------------------------------------------

PhoneBook::PhoneBook()
{
	current_contacts = 0;
	oldest_contacts = 0;
}

PhoneBook::~PhoneBook()
{
	return ;
}

int	PhoneBook::getCurrentContacts() const
{
	return current_contacts;
}

// ----------------------------------------------
// MÉTODO (Añade o reemplaza contactos)
// ----------------------------------------------

void	PhoneBook::addContact()
{
	Contact new_contact;
	
	new_contact.initialize();

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

// ----------------------------------------------
// FUNCIÓN AUXILIAR: TRUNCAR TEXTO LARGO
// ----------------------------------------------
std::string truncate(std::string text)
{
	if (text.length() > 10) 
		return text.substr(0, 9) + "."; // Ej: "Alexander" → "Alexande."
	return text;
}

// ----------------------------------------------
// MÉTODO (Mostrar lista de Contactos)
// ----------------------------------------------

void PhoneBook::displayContacts()
{
	int i;

	i = 0;

	std::cout << std::endl;
	std::cout << "| Index | First Name  | Last Name   | Nickname    |" << std::endl;
	std::cout << "|-------|-------------|-------------|-------------|" << std::endl;
	while (i < current_contacts)
	{
		std::cout << "|" << std::setw(7) << i << "|"
			<< std::setw(13) << std::left << truncate(list[i].getFirstName()) << "|"
			<< std::setw(13) << std::left << truncate(list[i].getLastName()) << "|"
			<< std::setw(13) << std::left << truncate(list[i].getNickName()) << "|" << std::endl;
		i++;
	}
}

// ----------------------------------------------
// MÉTODO (Mostrar detalles de un Contacto)
// ----------------------------------------------

void	PhoneBook::ContactDetails(int index)
{
	// Si el indice no existe
	if (index < 0 || index >= current_contacts)
	{
		std::cout << "Error: Invalid Index" << std::endl;
		return ;
	}
	// Monstrar todos los campos del contacto
	std::cout << std::endl;
	std::cout << "Name: " << list[index].getFirstName() << std::endl;
	std::cout << "LastName: " << list[index].getLastName() << std::endl;
	std::cout << "NickName: " << list[index].getNickName() << std::endl;
	std::cout << "PhoneNumber: " << list[index].getPhoneNumber() << std::endl;
	std::cout << "DarkestSecret: " << list[index].getDarkestSecret() << std::endl;
	std::cout << std:: endl;
}

