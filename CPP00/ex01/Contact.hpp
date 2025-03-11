/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:12:31 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/10 21:56:19 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

class Contact
{
	public:
			Contact();
			~Contact();

			void		setFirstName(const std::string &_firstName);
			void		setLastName(const std::string &_lastName);
			void		setNickName(const std::string &_nickname);
			void		setPhoneNumber(const std::string &_phone_number);
			void		setDarkestSecret(const std::string &_secret);

			std::string getFirstName();
			std::string getLastName();
			std::string getNickName();
			std::string getPhoneNumber();
			std::string getDarkestSecret();

			static bool	ft_isspace_str(const std::string text);
			void		add();

	private:
			std::string firstname;
			std::string lastname;
			std::string nickname;
			std::string phone_number;
			std::string darkestSecret;
};
