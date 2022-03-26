/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:14:44 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/26 17:15:49 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

#include "Animal.hpp"

class Cat: public Animal
{
	private:

	public:
		Cat(void);
		Cat(const Cat &c);
		~Cat(void);

		const Cat	&operator=(const Cat &c);

		void	makeSound(void) const;
};

# endif