/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:21:40 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 18:28:27 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
		public:
				Brain();
				Brain(const Brain &obj);
				Brain &operator=(const Brain &obj);
				~Brain();

				void				setIdea(const std::string _ideas, int i);
				std::string			getIdea(int i);
		protected:
				std:: string ideas[100];
};