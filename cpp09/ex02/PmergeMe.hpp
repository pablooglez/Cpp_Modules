/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:00:38 by pablogon          #+#    #+#             */
/*   Updated: 2025/05/21 22:01:13 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream> // std::cout, std::endl
#include <cstdlib> // atoi
#include <vector> // std::vector
#include <deque> // std::deque
#include <ctime> // clock, CLOCKS_PER_SEC
#include <string> // std::string
#include <cstring> // strncmp
#include <utility> // std::pair
#include <climits> // INT_MAX, INT_MIN

class PmergeMe
{
	private:

	public:
			PmergeMe();
			~PmergeMe() throw();
			PmergeMe(const PmergeMe &obj) throw();
			PmergeMe &operator=(const PmergeMe &obj) throw();
			
			// std::vector
			void sortVector(std::vector<int>& vec);
			std::vector<int> mergeInsertionSortVector(std::vector<int> vec);
			void insertionSortVector(std::vector<std::pair<int, int> >& pairs);
			
			// std::deque
			void sortDeque(std::deque<int>& deq);
			std::deque<int> mergeInsertionSortDeque(std::deque<int> deq);
			void insertionSortDeque(std::deque<std::pair<int, int> >& pairs);
};