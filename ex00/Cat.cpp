/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:15:28 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/26 17:17:41 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &c): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = c;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

const Cat	&Cat::operator=(const Cat &c)
{
	type = c.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat goes meow" << std::endl;
}