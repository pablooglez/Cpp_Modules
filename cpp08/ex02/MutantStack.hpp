/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:56:44 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/08 20:09:36 by pablogon         ###   ########.fr       */
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
				typedef typename std::stack<T>::container_type::const_iterator const_iterator;
				typedef typename std::stack<T>::container_type::const_reverse_iterator creviterator;
				typedef typename std::stack<T>::container_type::reverse_iterator r_iterator;

				iterator begin();
				iterator end();
				const_iterator begin() const;
				const_iterator end() const;
				creviterator crbegin() const;
				creviterator crend() const;
				r_iterator rbegin();
				r_iterator rend();
};

#include "MutantStack.tpp"