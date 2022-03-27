/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:57:37 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/28 00:14:43 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void): type("animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &a)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = a;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

const Animal	&Animal::operator=(const Animal &a)
{
	type = a.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "animal default makeSound called" << std::endl;
}

const std::string	&Animal::getType(void) const
{
	return (type);
}