/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:57:56 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 14:32:29 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	private:
			const std::string _name;
			bool			_signed;
			const int		_gradeToSign;
			const int		_gradeToExecute;

	public:
			AForm();
			virtual ~AForm();
			AForm(const AForm &obj);
			AForm &operator=(const AForm &obj);
			
			AForm(const std::string name, const int sign, const int execute);

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
			
			class ItWasSignedException : public std::exception
			{
				public:
					const char* what() const throw();	
			};

			class ItWasntSignedException : public std::exception
			{
				public:
					const char *what() const throw();
			};
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);