/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expediente.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 12:14:02 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 12:41:28 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expediente.hpp"
#include <iostream>

expediente::expediente(int numeroExp)
{
	this->numeroExp = numeroExp;
}

expediente::~expediente()
{
}

int	expediente::getExpediente()
{
	return numeroExp;
}
