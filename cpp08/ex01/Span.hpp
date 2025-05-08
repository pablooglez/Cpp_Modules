/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:14:15 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/08 20:30:39 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm> // std::find
#include <vector> // std::vector
#include <list> // std::list
#include <deque> // std::deque
#include <stdexcept> // std::runtime_error

class Span
{
		private:
				unsigned int _N;
				std::vector<int> _container;
		public:
				Span();
				~Span();
				Span (unsigned int n);
				Span(const Span &obj);
				Span &operator=(const Span &obj);

				void			addNumber(int n);
				unsigned int	shortestSpan();
				unsigned int	longestSpan();

				template <typename Iterator>
				void	addRange(Iterator begin, Iterator end)
				{
					if (std::distance(begin, end) + this->_container.size() > this->_N)
						throw std::runtime_error("Can't add range, not enough space");
					
					this->_container.insert(this->_container.end(), begin, end);
				}
};
