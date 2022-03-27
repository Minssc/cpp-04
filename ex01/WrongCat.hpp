/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:48:27 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/28 00:19:35 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:

	public:
		WrongCat(void);
		WrongCat(const WrongCat &c);
		~WrongCat(void);

		const WrongCat	&operator=(const WrongCat &c);

		void	makeSound(void) const;
};

# endif