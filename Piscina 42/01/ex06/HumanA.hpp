/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:08:42 by marvin            #+#    #+#             */
/*   Updated: 2020/07/08 10:08:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA
{
	private:
		const Weapon &weapon;
		std::string	name;

	public:
		HumanA(std::string const &name, const Weapon &weapon);
		~HumanA();

		void	attack();
};

#endif
