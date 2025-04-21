/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:44:41 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/21 23:14:16 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	
	this->_grade = obj._grade;
	
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Bureaucrat copy assignmet operator called" << std::endl;
	
	if (this != &obj)
	{
		this->_grade = obj._grade;
	}
	return *this;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << _name << ": Bureaucrat constructor called" << std::endl;

	try
	{
		if(grade < 1)
			throw GradeTooHightException();
		else if (grade > 150)
			throw GradeTooLowException();
		this->_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

}

const std::string &Bureaucrat::getName() const
{
	return this->_name;
}

const int &Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
	try
	{
		if (this->_grade - 1 < 1)
			throw GradeTooHightException();
		else
			this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if (this->_grade + 1 > 150)
			throw GradeTooLowException();
		else
			this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
}

void	Bureaucrat::signForm(Form &obj)
{
	try
	{
		obj.beSigned(*this);

		std::cout << _name << " signed " << obj.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " couldn't sign " << obj.getName() << " because "  << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHightException::what() const throw()
{
	return "Grade too hight!\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{

	return "Grade too low!\n";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;

	return (out);
}