/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 19:35:29 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/25 22:07:10 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = obj.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->setRawBits(obj.getRawBits());
	return *this;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << bits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = static_cast<int>(roundf(number) * (1 << bits));
}

float	Fixed::toFloat(void)const
{
	return (static_cast<float>(value) / (1 << bits));
}

int		Fixed::toInt(void)const
{
	return (this->value >> bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int	Fixed::getRawBits(void) const
{
	return(this->value);
}

// Comparison Operators

bool Fixed::operator>(const Fixed &obj) const
{
	return this->value > obj.value;
}

bool Fixed::operator<(const Fixed &obj) const
{
	return this->value < obj.value;
}

bool Fixed::operator>=(const Fixed &obj) const
{
	return this->value >= obj.value;
}

bool Fixed::operator<=(const Fixed &obj) const
{
	return this->value <= obj.value;
}

bool Fixed::operator==(const Fixed &obj) const
{
	return this->value == obj.value;
}

bool Fixed::operator!=(const Fixed &obj) const
{
	return this->value != obj.value;
}

// Arithmetic Operators

Fixed Fixed::operator+(const Fixed &obj)
{
	Fixed result;
	result.value = value + obj.value;
	return (result);
}

Fixed Fixed::operator-(const Fixed &obj)
{
	Fixed result;
	result.value = value - obj.value;
	return (result);
}

Fixed Fixed::operator*(const Fixed &obj)
{
	Fixed result;
	result.value = value * obj.toFloat();
	return (result);
}

Fixed Fixed::operator/(const Fixed &obj)
{
	if (obj.value == 0)
	{
		std::cout << " Error: Division by zero" << std::endl;
		return (0);
	}
	Fixed result;
	result.value = this->value / obj.toFloat();
	return (result);
}

// Increment / Decrement

Fixed &Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->value++;
	return (temp);
}

Fixed &Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->value--;
	return (temp);
}

// Four overloaded member fuctions

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}