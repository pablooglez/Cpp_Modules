/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:14:15 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/08 13:35:54 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

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

				void	addNumber(int n);
				void	shortestSpan();
				void	longestSpan();
};
