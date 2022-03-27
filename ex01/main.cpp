/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:09:50 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 14:20:20 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

# define N_ANIMALS 4

int	main(void)
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	delete j;
	delete i;

	Animal	*animals[N_ANIMALS];

	for (int i = 0; i < N_ANIMALS; ++i)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (int i = 0; i < N_ANIMALS; ++i)
		delete animals[i];

	const Cat	*cat = new Cat();

	cat->setBrain(0, "I like cats");
	std::cout << "idea: " << cat->getBrain()->getIdea(0) << std::endl;

	Cat	*copycat = new Cat(*cat);
	std::cout << "idea: " << copycat->getBrain()->getIdea(0) << std::endl;

	Cat	*assigncat = new Cat();

	*assigncat = *cat;
	std::cout << "idea: " << assigncat->getBrain()->getIdea(0) << std::endl;

	delete cat;
	delete copycat;
	delete assigncat;

	return (0);
}