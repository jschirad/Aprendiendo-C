/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   furgoneta.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 12:02:15 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 12:11:43 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FURGONETA_HPP
#define FURGONETA_HPP

#include "vehiculo.hpp"
#include <iostream>
#include <string.h>

class furgoneta : protected vehiculo
{
private:
	int	carga;
public:
	furgoneta(std::string marca, std::string color, std::string modelo, int carga);
	~furgoneta();

	int getCarga();
	std::string	retornarMarca();
};

#endif
