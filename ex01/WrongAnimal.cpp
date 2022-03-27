/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:44:54 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/28 00:19:21 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = a;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

const WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &a)
{
	type = a.getType();
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal goes what" << std::endl;
}

const std::string	&WrongAnimal::getType(void) const
{
	return (type);
}