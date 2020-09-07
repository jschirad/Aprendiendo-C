/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 21:23:46 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/07 09:55:09 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

# include <iostream>
# include <string.h>
# include <iomanip>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	login_42;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthdate;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
public:
	Contact();
	~Contact();

	void	setContact();
	void	getContact();
	std::string	get_firstname();
	std::string	get_lastname();
	std::string	get_nickname();
};

#endif
