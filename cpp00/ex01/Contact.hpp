/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:12:31 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/06 18:29:59 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Contact					// Cajita "Contact"
{
	public:
			Contact();			//Constructor
			~Contact();			//Destructor
		
			//MÉTODOS
			void	setFirstName(const std::string &firstName);			// "SETTERS" Llaves para guardar
			void	setLastName(const std::string &lastName);
			void	setNickName(const std::string &nickname);
			void	setPhoneNumber(const std::string &phone_number);
			void	setDarkestSecret(const std::string &secret);
			void	initialize();

			//ATRIBUTOS
			std::string getFirstName();									// "GETTERS" Llaves para ver
			std::string getLastName();
			std::string getNickName();
			std::string getPhoneNumber();
			std::string getDarkestSecret();

	private:
			std::string firstname;
			std::string lastname;
			std::string nickname;
			std::string phone_number;
			std::string darkestSecret;
};

#endif