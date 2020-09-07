/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 08:07:11 by marvin            #+#    #+#             */
/*   Updated: 2020/07/07 08:07:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Zombie.hpp"

class	ZombieHorde
{
	private:
		Zombie 		*zombies;
		int			_number;

	public:
		ZombieHorde();
		ZombieHorde(int _number);
		~ZombieHorde();

		void	announce();
};

#endif
