/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:08:07 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/20 18:14:05 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <string.h>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, FragTrap
{
private:
	SuperTrap();
public:
	SuperTrap(std::string const &name);
	SuperTrap(SuperTrap const &obj);
	~SuperTrap();

	SuperTrap &operator=(SuperTrap const &obj);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
};

#endif
