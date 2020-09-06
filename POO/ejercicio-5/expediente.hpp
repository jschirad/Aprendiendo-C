/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expediente.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 12:06:26 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 12:41:26 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXPEDIENTE_HPP
# define EXPEDIENTE_HPP

#include <iostream>

class expediente
{
private:
	int	numeroExp;
public:
	expediente(int numeroExp);
	~expediente();

	int	getExpediente();
};

#endif
