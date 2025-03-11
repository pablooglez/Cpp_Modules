/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:39:09 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/10 21:57:37 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

#pragma region "Main"

	int	main(int argc, char **argv)
	{
		int	i;
		int	j;

		if (argc == 1)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
			if (i < argc - 1)
				std:: cout << " ";
		}
		std::cout << std::endl;
	}

#pragma endregion
