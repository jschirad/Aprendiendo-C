/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangulo.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:55:57 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/07 12:14:49 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGULO_HPP
# define TRIANGULO_HPP

# include "figura.hpp"
# include <iostream>

class triangulo : public Figura
{
private:
	float	lado1;
	float	lado2;
	float	lado3;
public:
	triangulo(int lados, float lado1, float lado2, float lado3);
	~triangulo();
	float	areaTriangulo();
};

#endif

