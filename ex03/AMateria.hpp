/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:31:29 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 19:31:55 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

// # include "ICharacter.hpp"
# include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(AMateria const &a);
		AMateria(std::string const &type);
		virtual	~AMateria();

		AMateria const	& operator=(AMateria const &a);

		std::string const &	getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharacter& target) = 0;
};

# endif