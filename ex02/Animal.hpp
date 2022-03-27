/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:54:46 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 14:24:41 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

// # include "Brain.hpp"
# include <string>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(const Animal &a);
		virtual	~Animal(void);

		const Animal	&operator=(const Animal &a);

		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;
};

# endif