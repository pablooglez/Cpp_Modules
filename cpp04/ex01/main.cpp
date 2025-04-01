/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:22:12 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/01 19:05:49 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Cat type: " << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;


	std::cout << "\n--- Creating an array of Animals ---\n" << std::endl;

	const int numAnimals = 2;
	Animal* animals[numAnimals];

	for (int i = 0; i < numAnimals; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	// Show animals sounds
	for (int i = 0; i < numAnimals; i++)
	{
		std::cout << "Animal " << i + 1 << " is a " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	// Free
	for (int i = 0; i < numAnimals; i++)
		delete animals[i];

	return (0);
}
