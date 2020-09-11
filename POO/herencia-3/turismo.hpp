/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turismo.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:07:06 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 11:15:58 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TURISMO_HPP
#define TURISMO_HPP

#include <iostream>
#include <string.h>
#include "vehiculo.hpp"

class turismo : public vehiculo
{
private:
	int	numeroPuertas;
public:
	turismo(std::string marca, std::string color, std::string modelo, int numeroPuertas) : vehiculo(marca, color, modelo)
	{
		this->numeroPuertas = numeroPuertas;
	}
	~turismo();

	int	getNumeroPuertas();
	// Una forma de acceder a un atributo protegido de la clase base es crear un metodo
	std::string returnModelo();
};

#endif
