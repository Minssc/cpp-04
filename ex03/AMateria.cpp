/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:47:33 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 19:12:26 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria::AMateria(AMateria const &a)
{
	*this = a;
}

AMateria::~AMateria(void) {}

AMateria const	&AMateria::operator=(AMateria const &a)
{
	_type = a.getType();
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (_type);
}
