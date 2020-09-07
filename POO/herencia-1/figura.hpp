/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figura.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:54:29 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/07 12:14:44 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIGURA_HPP
# define FIGURA_HPP

# include <iostream>

class Figura{
	private:
		int	lados;
	public:
		Figura(int lados);
		~Figura();

		int	getLados();
};

#endif

