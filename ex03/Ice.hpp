/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:26:14 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 19:53:37 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
	private:

	public:
		Ice();
		Ice(Ice const &i);
		~Ice();

		Ice const	& operator=(Ice const &i);

		AMateria*	clone() const;
		void		use(ICharacter &target);
};

# endif