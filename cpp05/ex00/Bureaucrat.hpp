/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:36:22 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/16 19:13:58 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Bureaucrat
{
	private:
			const std::string _name;
			int				_grade;

	public:
			Bureaucrat();	//Constructor
			Bureaucrat(const std::string name, int grade);	//Other constructor
			Bureaucrat(const Bureaucrat &obj);	//Copy constructor
			Bureaucrat &operator=(const Bureaucrat &obj);	//Copy assignment operator
			~Bureaucrat();	//Destructor

			const std::string	&getName() const; //Getter name
			const int			&getGrade() const; //Getter grade

			void	incrementGrade();
			void	decrementGrade();

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);