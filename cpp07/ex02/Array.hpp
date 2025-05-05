/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:50:26 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/05 19:13:41 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept> //std::out_of_range


template <typename T>

class Array
{
	private:
			T	*_array;
			unsigned int _size;

	public:
			Array();
			~Array();
			Array(unsigned int n);
			Array(const Array &obj);
			Array &operator=(const Array &obj);
			T &operator[] (unsigned int index);
			const T &operator[] (unsigned int index) const;
			int	size() const;
};

#include "Array.tpp"