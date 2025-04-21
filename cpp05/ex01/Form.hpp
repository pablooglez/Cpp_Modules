/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:57:56 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/21 23:08:41 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	private:
			const std::string _name;
			bool			_signed;
			const int		_gradeToSign;
			const int		_gradeToExecute;

	public:
			Form();
			~Form();
			Form(const Form &obj);
			Form &operator=(const Form &obj);
			
			Form(const std::string name, const int sign, const int execute);

			const std::string &getName() const;
			const bool		  &getSigned() const;
			const int		  &getGradeToSign() const;
			const int		  &getGradeToExecute() const;

			void	beSigned(const Bureaucrat &obj);

			class GradeTooHighException : public std::exception
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

std::ostream &operator<<(std::ostream &out, const Form &obj);