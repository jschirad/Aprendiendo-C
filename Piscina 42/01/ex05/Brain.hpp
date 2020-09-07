/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:13:15 by marvin            #+#    #+#             */
/*   Updated: 2020/07/07 11:13:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>
# include <iomanip>

class Brain
{
	private:
		std::string	address;

	public:
		Brain();
		~Brain();
		void		setAddress();
		std::string identify();
};

#endif
