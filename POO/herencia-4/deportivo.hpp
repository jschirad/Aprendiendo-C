/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deportivo.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 11:07:04 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 11:32:18 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEPORTIVO_HPP
#define DEPORTIVO_HPP

#include <iostream>
#include <string.h>
#include "vehiculo.hpp"
// HERENCIA PRIVADA
class deportivo : private vehiculo
{
private:
	int	cilindrada;
public:
	deportivo(std::string marca, std::string color, std::string modelo, int cilindrada);
	~deportivo();

	int getCilindros();
	std::string retornarMarca();
	std::string retornarModelo();
};

#endif
