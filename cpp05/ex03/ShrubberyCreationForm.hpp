/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:01:27 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 14:37:10 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
			const std::string _target;

	public:
			ShrubberyCreationForm();
			~ShrubberyCreationForm();
			ShrubberyCreationForm(const ShrubberyCreationForm &obj);
			ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);

			ShrubberyCreationForm(const std::string target);

			int	execute(Bureaucrat const &executor) const;
};