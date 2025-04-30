/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:37:02 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/30 18:01:43 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h> // uintptr_t
#include "Data.hpp"

class Serializer
{
	private:
			Serializer();
			~Serializer();
			Serializer(const Serializer &obj);
			Serializer &operator=(const Serializer &obj);
	public:
			static uintptr_t serialize(Data* ptr);
			static Data*	deserialize(uintptr_t raw);
};