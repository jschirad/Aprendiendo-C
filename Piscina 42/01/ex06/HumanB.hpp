/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:16:54 by marvin            #+#    #+#             */
/*   Updated: 2020/07/08 10:16:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB
{
	private:
		const Weapon	*escopeta;
		std::string	name;

	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(const Weapon &escopeta);
		void	attack();
};

#endif
