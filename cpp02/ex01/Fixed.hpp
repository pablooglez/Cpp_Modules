/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:09:31 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/21 19:04:57 by pablogon         ###   ########.fr       */
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

		private:
				int	value;
				static const int bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed); // Declaración operador de inserción