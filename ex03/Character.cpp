/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:55:12 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 19:48:37 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

Character::Character(): _name("John Doe")
{
	for (int i = 0; i < N_MAT; ++i) _materias[i] = 0;
}

Character::Character(std::string const &name): _name(name) 
{
	for (int i = 0; i < N_MAT; ++i) _materias[i] = 0;
}

Character::Character(Character const &c) 
{
	for (int i = 0; i < N_MAT; ++i) _materias[i] = 0;
	*this = c;
}

Character::~Character() 
{
	for(int i = 0; i < N_MAT; ++i) delete _materias[i];
}

Character const	&Character::operator=(Character const &c)
{
	_name = c.getName();
	for(int i = 0; i < N_MAT; ++i)
	{
		AMateria	*mat = c.getMateria(i);
		if (mat)
		{
			AMateria	*nm = mat->clone();
			delete _materias[i];
			_materias[i] = nm;
			continue ;
		}
		delete _materias[i];
		_materias[i] = 0;
	}
	return (*this);
}

AMateria	*Character::getMateria(int idx) const
{
	if (idx < 0 || N_MAT <= idx) return (0);
	return (_materias[idx]);
}

std::string const	&Character::getName() const
{
	return (_name);
}

#include <iostream>
void	Character::equip(AMateria *m)
{
	// std::cout << "try to equip materia type: " << m->getType() << std::endl;
	for (int i = 0; i < N_MAT; ++i)
	{
		if (!_materias[i])
		{
			// std::cout << "equip at slot #" << i << std::endl;
			_materias[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || N_MAT <= idx) return ;
	if (!_materias[idx]) return ;
	delete _materias[idx];
	_materias[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || N_MAT <= idx || !_materias[idx]) return ;
	_materias[idx]->use(target);
}