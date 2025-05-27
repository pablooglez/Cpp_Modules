/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:00:33 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/27 18:24:56 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool is_digits(std::string &str)
{
	return (str.find_first_not_of("0123456789") == std::string::npos);
}

void write_error(std::string s)
{
	std::cout << s << std::endl;
	exit (1);
}

void check_max(char *s)
{
	long num = strtol(s, NULL, 10);
	
	if (num > INT_MAX || num < INT_MIN)
		write_error("Error: number outside the range of int");
}

int main(int argc, char **argv)
{
	if (argc < 2)
		write_error("Error: No arguments. Usage: ./PmergeMe [list of numbers].");

	if (argc > 3001)
		write_error("Error");
	
	int i = 1;
	int j;

	while (argv[i])
	{
		std::string s = argv[i];
		if (s.empty() || !is_digits(s))
			write_error("Error");
		i++;
	}

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (atoi(argv[j]) == atoi(argv[i]))
				write_error("Error: duplicate number.");
			j++;
		}
		check_max(argv[i]);
		i++;
	}

	i = 1;
	std::vector<int> vec;
	std::deque<int> deque;

	std::cout << "Before:  ";

	float time00 = 0.0f;
	float time01 = 0.0f;
	static clock_t start00;
	static clock_t start01;

	while (argv[i])
	{
		std::cout << argv[i] << " ";
		
		int n = atoi(argv[i]);
		
		start00 = clock();
		
		vec.push_back(n);
		
		time00 = time00 + static_cast<float>(clock() - start00) / CLOCKS_PER_SEC;
		
		start01 = clock();
		
		deque.push_front(n);
		
		time01 = time01 + static_cast<float>(clock() - start01) / CLOCKS_PER_SEC;
		
		i++;
	}
	std::cout << std::endl;

	std::cout << "After:  ";
	
	static clock_t start1 = clock();

	PmergeMe sorter;
	sorter.sortVector(vec);

	float time1 = time00 + static_cast<float>(clock() - start1) / CLOCKS_PER_SEC;

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
		int num = *it;
		std::cout << num << " ";
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << time1 << " us"<< std::endl; 

	static clock_t start2 = clock();

	sorter.sortDeque(deque);

	float time2 = time01 + static_cast<float>(clock() - start2) / CLOCKS_PER_SEC;

	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << time2 << " us"<< std::endl; 

	return (0);
}