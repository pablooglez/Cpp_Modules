/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:14:15 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/08 14:26:11 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm> // std::find
#include <vector> // std::vector
#include <list> // std::list
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

				void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
