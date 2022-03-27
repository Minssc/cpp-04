/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:30:09 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 19:22:19 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# define N_MAT 4

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_materias[N_MAT];

	public:
		Character();
		Character(std::string const &name);
		Character(Character const &c);
		~Character();

		Character const	&operator=(Character const &c);

		AMateria	*getMateria(int idx) const;
		std::string const	&getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

# endif