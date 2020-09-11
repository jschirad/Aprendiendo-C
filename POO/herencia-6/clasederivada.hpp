/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clasederivada.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:07:05 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 15:11:20 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASEDERIVADA_HPP
#define CLASEDERIVADA_HPP

#include <iostream>
#include <string.h>
#include "clasebase.hpp"

class clasederivada : public clasebase
{
private:
	int numero2;
public:
	clasederivada(int nuemro, int numero2);
	~clasederivada();
};

#endif
