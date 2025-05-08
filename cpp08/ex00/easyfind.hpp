/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:33:33 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/07 19:54:05 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm> //std::find
#include <vector> // std::vector
#include <list> // std::list
#include <stdexcept> // std::runtime_error

template <typename T>

typename T::iterator easyfind(T &container, int n)
{
	typename T::iterator result = std::find(container.begin(), container.end(), n);

	if (result == container.end())
	{
		throw std::runtime_error("Value not found in container");
	}
	return (result);
}
