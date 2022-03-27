/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:04:57 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 13:43:40 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Brain.hpp"
# include "Animal.hpp"

class Dog: public Animal
{
	private:
		Brain	*brain;

	public:
		Dog(void);
		Dog(const Dog &d);
		~Dog(void);

		const Dog	&operator=(const Dog &d);

		Brain	*getBrain(void) const;
		void	makeSound(void) const;
};

# endif