/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:42:26 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/19 21:26:53 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack> // std::stack
#include <string> // std::string

class RPN
{
	private: std::stack<int> _stack;

	public:
			RPN();
			~RPN();
			RPN(const std::string &str);
			RPN(const RPN &obj);
			RPN &operator=(const RPN &obj);

			void	calculate(char c);
};