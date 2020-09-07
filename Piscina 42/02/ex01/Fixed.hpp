/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad </var/mail/jschirad>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 10:40:13 by jschirad          #+#    #+#             */
/*   Updated: 2020/07/30 10:44:48 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	value;
		static const int bits = 8;

	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &other);
		~Fixed();

		Fixed &operator=(Fixed const &other);

		int	getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int	toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
