/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:06:19 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 13:48:07 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal(), brain(0)
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &d): Animal(), brain(0)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = d;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

const Dog	&Dog::operator=(const Dog &d)
{
	Brain	*nb = new Brain(*d.getBrain());
	delete brain;
	brain = nb;

	type = d.getType();
	return (*this);
}

Brain	*Dog::getBrain(void) const
{
	return (brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog goes WOF" << std::endl;
}