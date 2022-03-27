/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:10:33 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 19:16:37 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// #include "AMateria.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice") {}

Ice::Ice(Ice const &i): AMateria(i.getType()) {}

Ice::~Ice() {}

Ice const	&Ice::operator=(Ice const &i)
{
	// do nothing. Ice is Ice, assigning Ice will be Ice.
	static_cast<void>(i);
	return (*this);
}

AMateria	*Ice::clone() const
{
	return (new Ice());
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}