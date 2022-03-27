/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:27:07 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 19:53:28 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{
	private:

	public:
		Cure();
		Cure(Cure const &c);
		~Cure();

		Cure const	& operator=(Cure const &c);

		AMateria*	clone() const;
		void		use(ICharacter &target);
};

# endif