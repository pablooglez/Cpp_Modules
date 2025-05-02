/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:49:28 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/02 18:09:32 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename Q>
void iter(T *a, int len, Q f)
{
	int	j = 0;

	if (!a || len <= 0)
	{
		std::cout << "Error: Invalid array/len" << std::endl;
		return;
	}

	while (j < len)
	{
		f(a[j]);
		j++;
	}
	std::cout << std::endl;
}