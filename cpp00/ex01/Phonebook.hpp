/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:17:05 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/06 17:51:10 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>		//atoi
#include <iomanip>		// std::setw, std::right


class PhoneBook
{
	public:
			PhoneBook();
			~PhoneBook();

			void	addContact();					// Agrega un contacto ( o reemplaza el antiguo si hay 8)
			void	displayContacts();				// Muestra la lista de contactos formateada
			void	ContactDetails(int index);		// Muestra detalles de un contacto en específico
			int		getCurrentContacts() const;
	private:
			Contact list[8];						//Array estático de 8 Contactos
			int		current_contacts;				// Número actual de contactos (0-8)
			int		oldest_contacts;				// Indice del contacto más antiguo
};

#endif