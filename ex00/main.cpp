/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:09:50 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/26 17:59:34 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;

	const WrongAnimal*	wmeta = new WrongAnimal();
	const WrongAnimal*	wcat = new WrongCat();

	std::cout << wcat->getType() << " " << std::endl;
	wcat->makeSound();
	wmeta->makeSound();

	delete wmeta;
	delete wcat;
	return (0);
}