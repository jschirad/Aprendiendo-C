/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figura.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 12:01:24 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/07 12:14:46 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "figura.hpp"

Figura::Figura(int lados)
{
	this->lados = lados;
}

Figura::~Figura()
{

}

int	Figura::getLados()
{
	return (lados);
}
