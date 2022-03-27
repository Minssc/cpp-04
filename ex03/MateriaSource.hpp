/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:33:13 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 19:25:42 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

# define N_MS 4

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <string>

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_materias[N_MS];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &m);
		~MateriaSource();

		MateriaSource const	& operator=(MateriaSource const &m);

		AMateria*	getMateria(int idx) const;
		void		learnMateria(AMateria* a);
		AMateria*	createMateria(std::string const & type);
};

# endif