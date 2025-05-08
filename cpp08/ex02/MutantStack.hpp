/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:56:44 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/08 19:13:19 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
		private:

		public:
				MutantStack();
				~MutantStack();
				MutantStack(const MutantStack &obj);
				MutantStack &operator=(const MutantStack &obj);

				typedef typename std::stack<T>::container_type::iterator iterator;
				iterator begin();
				iterator end();
};

#include "MutantStack.tpp"