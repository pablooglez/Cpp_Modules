/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:28:37 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 12:58:04 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main()
{
	std::cout << "===== TEST 1: FORMULARIO NORMAL =====" << std::endl;
	try
	{
		// Crear un burócrata de alto nivel y uno de bajo nivel
		Bureaucrat jefe("Director", 5);
		Bureaucrat asistente("Asistente", 140);

		// Crear un formulario que requiere nivel 100 para firmar
		AForm permiso("Permiso de ausencia", 100, 50);

		std::cout << "Formulario creado: " << permiso << std::endl;

		// El asistente intentará firmar (debería fallar)
		std::cout << "Intento de firma por asistente:" << std::endl;
		asistente.signForm(permiso);

		// El director intentará firmar (debería tener éxito)
		std::cout << "\nIntento de firma por director:" << std::endl;
		jefe.signForm(permiso);

		// Intentar firmar de nuevo (debería indicar que ya está firmado)
		std::cout << "\nIntento de firma repetida:" << std::endl;
		jefe.signForm(permiso);
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 2: EXCEPCIONES =====" << std::endl;
	try
	{
		std::cout << "Intentando crear formulario con grado sign inválido (151):" << std::endl;
		AForm invalido("Formulario inválido", 151, 50);  // Debería lanzar excepción
	}
	catch (const std::exception& e)
	{
		std::cout << "Error capturado: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\nIntentando crear formulario con grado execute inválido (0):" << std::endl;
		AForm invalido("Formulario inválido", 50, 0);  // Debería lanzar excepción
	}
	catch (const std::exception& e)
	{
		std::cout << "Error capturado: " << e.what() << std::endl;
	}
	return (0);
}