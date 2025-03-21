/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:52:23 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/21 15:30:01 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
		public:
				Fixed();
				Fixed(const Fixed &obj);
				Fixed &operator = (const Fixed &obj);
				~Fixed();

				void setRawBits(int const raw);
				int getRawBits(void) const;
		private:
				int	value;
				static const int bits = 8;
};