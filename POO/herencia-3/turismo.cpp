/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turismo.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:09:46 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 10:37:21 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turismo.hpp"
#include "vehiculo.hpp"


turismo::~turismo()
{
}

int	turismo::getNumeroPuertas()
{
	return numeroPuertas;
}

std::string turismo::returnModelo()
{
	std::string model = getModelo();
	return model;
}
