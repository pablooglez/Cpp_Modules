/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:01:29 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/19 17:11:07 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl
{
		public:
				Harl();
				~Harl();
				void	complain(std::string level);

		private:
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
};