/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:28:37 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 20:10:09 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << "===== TEST 1: FORMULARIO NORMAL =====" << std::endl;
	try
	{
		// Create a high-level and a low-level bureaucrat.
		Bureaucrat jefe("Director", 5);
		Bureaucrat asistente("Asistente", 140);

		// Create a form that requires level 100 to sign
		Form permiso("Permiso de ausencia", 100, 50);

		std::cout << "Formulario creado: " << permiso << std::endl;

		// Asistente will try to sign (should fail).
		std::cout << "Intento de firma por asistente:" << std::endl;
		asistente.signForm(permiso);

		// Jefe will try to sign (should be successful).
		std::cout << "\nIntento de firma por director:" << std::endl;
		jefe.signForm(permiso);

		// Attempt to sign again (should indicate that it is already signed)
		std::cout << "\nIntento de firma repetida:" << std::endl;
		jefe.signForm(permiso);
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what();
	}

	std::cout << "\n===== TEST 2: EXCEPCIONES =====" << std::endl;
	try
	{
		std::cout << "Intentando crear formulario con grado sign inválido (151):" << std::endl;
		Form invalido("Formulario inválido", 151, 50);  // Should throw exception
	}
	catch (const std::exception& e)
	{
		std::cout << "Error capturado: " << e.what();
	}

	try
	{
		std::cout << "\nIntentando crear formulario con grado execute inválido (0):" << std::endl;
		Form invalido("Formulario inválido", 50, 0);  // Should throw exception
	}
	catch (const std::exception& e)
	{
		std::cout << "Error capturado: " << e.what();
	}
	return (0);
}