/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:17:05 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/10 21:54:38 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>


class PhoneBook
{
	public:
			PhoneBook();
			~PhoneBook();

			int		getCurrentContacts() const;
			void	addContact();
			void	displayContacts();
			void	ContactDetails(int index);
	private:
			Contact list[8];
			int		current_contacts;
			int		oldest_contacts;
};
