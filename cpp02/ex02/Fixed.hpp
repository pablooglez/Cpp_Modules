/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 19:35:36 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/25 20:35:05 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
		public:
				Fixed();
				Fixed(const Fixed &obj);
				Fixed &operator = (const Fixed &obj);
				Fixed(const int value);
				Fixed(const float number);
				~Fixed();
				
				float	toFloat(void)const;
				int		toInt(void)const;
				
				void setRawBits(int const raw);
				int getRawBits(void) const;

				// Comparison Operators
				bool operator>(const Fixed &obj) const;
				bool operator<(const Fixed &obj) const;
				bool operator>=(const Fixed &obj) const;
				bool operator<=(const Fixed &obj) const;
				bool operator==(const Fixed &obj) const;
				bool operator!=(const Fixed &obj) const;

				// Arithmetic Operators
				Fixed operator+(const Fixed &obj);
				Fixed operator-(const Fixed &obj);
				Fixed operator*(const Fixed &obj);
				Fixed operator/(const Fixed &obj);

				// Increment / Decrement
				Fixed &operator++();
				Fixed operator++(int);
				Fixed &operator--();
				Fixed operator--(int);
				
				// Four overloaded member fuctions
				static Fixed &min(Fixed &a, Fixed &b);
				static const Fixed &min(const Fixed &a, const Fixed &b);
				static Fixed &max(Fixed &a, Fixed &b);
				static const Fixed &max(const Fixed &a, const Fixed &b);

		private:
				int	value;
				static const int bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);