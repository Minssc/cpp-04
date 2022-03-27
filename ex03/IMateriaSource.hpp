/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:31:16 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 16:33:00 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE_HPP__
# define __IMATERIASOURCE_HPP__

# include <string>
# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	~IMateriaSource() {};
		virtual void	learnMateria(AMateria*) = 0;
		virtual	AMateria*	createMateria(std::string const & type) = 0;
};

# endif