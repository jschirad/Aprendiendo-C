/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 08:22:28 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 08:22:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie
{
private:
	std::string		name;
	std::string		type;

public:
	Zombie();
	Zombie(std::string type, std::string name);
	~Zombie();

	std::string	get_name();
	std::string	get_type();
	void		announce();
	void		setname(std::string name);
	void		settype(std::string	type);
};

#endif
