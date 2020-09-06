/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   direccion.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 12:08:23 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 12:43:01 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIRECCION_HPP
# define DIRECCION_HPP

# include <iostream>
# include <string.h>

class direccion
{
private:
	std::string Direccion;
public:
	direccion(std::string Direccion);
	~direccion();
	std::string getDireccion();
};

#endif
