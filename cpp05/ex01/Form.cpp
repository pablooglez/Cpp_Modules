/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:55:00 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/21 23:10:37 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _gradeToSign(150), _gradeToExecute(150)
{
	this->_signed = false;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form &obj) : _name(obj._name), _signed(obj._signed), _gradeToSign(obj._gradeToSign), _gradeToExecute(obj._gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form	&Form::operator=(const Form &obj)
{
	std::cout << "Form copy assignmet operator called" << std::endl;
	
	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << _name << ": Form default constructor called" << std::endl;
	
	this->_signed = false;

	try
	{
		if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw GradeTooHighException();
		else if (_gradeToSign > 150 || _gradeToExecute > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
}

const	std::string &Form::getName() const
{
	return this->_name;
}

const bool &Form::getSigned() const
{
	return this->_signed;
}

const int &Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

const int &Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

void	Form::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() > this->getGradeToSign())
		throw(Form::GradeTooLowException());
	this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too hight!\n";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!\n";
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
	out << "Form name: " << obj.getName() << std::endl;

	if(obj.getSigned() == true)
		out << "It's signed\n";
	else
		out << "It's not signed\n";

	out << "Sign Grade " << obj.getGradeToSign() << std::endl;
	out << "Execute Grade " << obj.getGradeToExecute() << std::endl;

	return (out);
}