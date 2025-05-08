/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:10:51 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/08 19:26:23 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << "MutantStack constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std:: cout << "MutantStack destructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj) : std::stack<T>(obj)
{
	std::cout << "MutantStack copy constructor called" << std::endl;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &obj)
{
	std::cout << "Span copy assignment operator called" << std::endl;

	if (this != obj)
	{
		std::stack<T>::operator=(obj);
	}
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}