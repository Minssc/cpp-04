/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:37:24 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 19:47:52 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
	for (int i = 0; i < N_MS; ++i) _materias[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &m) 
{
	for (int i = 0; i < N_MS; ++i) _materias[i] = 0;
	*this = m;
}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < N_MS; ++i) delete _materias[i];
}

MateriaSource const	&MateriaSource::operator=(MateriaSource const &m)
{
	for (int i = 0; i < N_MS; ++i)
	{
		AMateria	*mat = m.getMateria(i);
		if (mat)
			_materias[i] = mat->clone();
		else
		{
			delete _materias[i];
			_materias[i] = 0;
		}
	}
	return (*this);
}

AMateria	*MateriaSource::getMateria(int idx) const
{
	if (idx < 0 || N_MS <= idx) return (0);
	return (_materias[idx]);
}

void	MateriaSource::learnMateria(AMateria *a)
{
	for (int i = 0; i < N_MS; ++i)
	{
		if (!_materias[i])
		{
			_materias[i] = a->clone();
			break ;
		}
	}
	delete a;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < N_MS; ++i)
	{
		AMateria	*&cm = _materias[i];
		if (!cm)
			return (0);
		if (type.compare(cm->getType()) == 0)
			return (cm->clone());
	}
	return (0);
}