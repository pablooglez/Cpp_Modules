/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:59:32 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/29 20:08:18 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Seralizer.hpp"
#include "Data.hpp"

int	main()
{
	Data src;
	
	std::cout << "Src:\n   - Memory: " << &src << "\n" << "   - Name: " << src._name << "\n";
	uintptr_t raw = Serializer::serialize(&src);



	Data *dest = Serializer::deserialize(raw);
	std::cout << "Dest:\n   - Memory: " << dest << "\n" << "   - Name: " << dest->_name << "\n";
}