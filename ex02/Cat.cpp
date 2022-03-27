/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:15:28 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 14:15:42 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal(), brain(0)
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &c): Animal(), brain(0)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = c;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

const Cat	&Cat::operator=(const Cat &c)
{
	Brain	*nb = new Brain(*c.getBrain());
	delete brain;
	brain = nb;

	type = c.getType();
	return (*this);
}

Brain	*Cat::getBrain(void) const
{
	return (brain);
}

void	Cat::setBrain(int idx, const std::string &idea) const
{
	brain->setIdea(idx, idea);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat goes meow" << std::endl;
}