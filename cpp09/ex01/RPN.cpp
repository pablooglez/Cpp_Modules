/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:42:24 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/19 21:30:29 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	//std::cout << "RPN constructor called" << std::endl;
}

RPN::~RPN()
{
	//std::cout << "RPN destructor called" << std::endl;
}

RPN::RPN(const std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			continue; // Simplemente ignoramos los espacios
		if (str[i] >= '0' && str[i] <= '9')
		{
			// Si es un dígito, lo añadimos a la pila
			_stack.push(str[i] - '0');
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			// Si es un operador, realizamos la operación
			calculate(str[i]);
		}
		else
		{
			// Si no es un operador ni un dígito, es un error
			throw std::runtime_error("Error");
		}
	}
	
	// Al finalizar, debería haber un solo elemento en la pila (el resultado)
	if (_stack.size() != 1)
	{
		throw std::runtime_error("Error: Invalid expression");
	}
	
	// Mostrar el resultado
	std::cout << _stack.top() << std::endl;
}

RPN::RPN(const RPN &obj)
{
	//std::cout << "RPN copy constructor called" << std::endl;

	this->_stack = obj._stack;
}

RPN &RPN::operator=(const RPN &obj)
{
	//std::cout << "RPN copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		this->_stack = obj._stack;
	}
	return (*this);
}

void	RPN::calculate(char c)
{
	// Verificar que hay al menos dos elementos en la pila
	if (_stack.size() < 2)
	{
		throw std::runtime_error("Error");
	}

	// Extraer los dos operandos (recordar que el orden es importante)
	int b = _stack.top();
	_stack.pop();
	int a = _stack.top();
	_stack.pop();

	// Realizar la operación según el operador
	switch (c)
	{
		case '+':
			_stack.push(a + b);
			break;
		case '-':
			_stack.push(a - b);
			break;
		case '*':
			_stack.push(a * b);
			break;
		case '/':
			if (b == 0)
			{
				throw std::runtime_error("Error");
			}
			_stack.push(a / b);
			break;
		default:
			throw std::runtime_error("Error");
	}
}