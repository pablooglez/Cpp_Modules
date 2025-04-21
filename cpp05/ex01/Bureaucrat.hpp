/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:36:22 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/21 23:08:52 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class	Bureaucrat
{
	private:
			const std::string _name;
			int				_grade;

	public:
			Bureaucrat();
			~Bureaucrat();
			Bureaucrat(const Bureaucrat &obj);
			Bureaucrat &operator=(const Bureaucrat &obj);
			
			Bureaucrat(const std::string name, int grade);

			const std::string	&getName() const;
			const int			&getGrade() const;

			void	incrementGrade();
			void	decrementGrade();
			void	signForm(Form &obj);

			class GradeTooHightException : public std::exception
			{
				public:
					const char* what() const throw();
			};

			class GradeTooLowException : public std::exception
			{
				public:
					const char* what() const throw();
			};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);