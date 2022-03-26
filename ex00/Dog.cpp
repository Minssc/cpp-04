/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:06:19 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/26 17:14:14 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &d): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = d;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

const Dog	&Dog::operator=(const Dog &d)
{
	type = d.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog goes WOF" << std::endl;
}