/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:47:39 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/01 13:52:29 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T temp = a;

	a = b;
	b = temp;
}

template <typename T>
T min (T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T max (T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}
