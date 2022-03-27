/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:49:54 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/28 00:19:40 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &c): WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = c;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

const WrongCat	&WrongCat::operator=(const WrongCat &c)
{
	type = c.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat goes WHAMEOW!" << std::endl;
}
