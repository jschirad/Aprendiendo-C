/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad </var/mail/jschirad>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 09:52:20 by jschirad          #+#    #+#             */
/*   Updated: 2020/07/30 09:56:26 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int			value;
		static const int	bits = 8;

	public:
		Fixed();
		Fixed(Fixed const &other);
		~Fixed();

		Fixed &operator=(Fixed const &other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
