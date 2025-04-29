/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:42:11 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/29 19:46:33 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Data
{
	private:

	public:
			Data();
			~Data();
			Data(const Data &obj);
			Data	&operator=(const Data &obj);

			std::string _name;
};