/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:02:39 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/29 21:16:44 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime> // time()

class Base
{
	private:

	public:
			virtual ~Base();
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);