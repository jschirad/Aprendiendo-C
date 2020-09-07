/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 08:27:51 by marvin            #+#    #+#             */
/*   Updated: 2020/07/10 10:01:20 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string		type;
public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump();
};

#endif
