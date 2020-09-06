/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 11:34:25 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/04 11:42:20 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_HPP
# define SQUARE_HPP

# include <iostream>

class square
{
private:
	float lado1;
	float lado2;
public:
	square(float lado1, float lado2);
	square(float lado1);
	~square();
	void	getPerimetro();
	void	getArea();
};

#endif
