/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:04:57 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/26 17:12:08 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.hpp"

class Dog: public Animal
{
	private:

	public:
		Dog(void);
		Dog(const Dog &d);
		~Dog(void);

		const Dog	&operator=(const Dog &d);

		void	makeSound(void) const;
};

# endif