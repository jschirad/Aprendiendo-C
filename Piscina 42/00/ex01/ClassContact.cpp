/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 09:55:25 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/07 10:00:15 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "ClassContact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void	Contact::setContact()
{
	std::cout<<"-------------------------------------"<<std::endl;

	std::cout<<"> First Name : ";
	std::cin>>first_name;

	std::cout<<"> Last Name : ";
	std::cin>>last_name;

	std::cout<<"> Nickname : ";
	std::cin>>nick_name;

	std::cout<<"> Login : ";
	std::cin>>login_42;

	std::cout<<"> Postal Address : ";
	std::cin>>postal_address;

	std::cout<<"> Email Address : ";
	std::cin>>email_address;

	std::cout<<"> Phone Number : ";
	std::cin>>phone_number;

	std::cout<<"> Birthdate : ";
	std::cin>>birthdate;

	std::cout<<"> Favorite Meal : ";
	std::cin>>favorite_meal;

	std::cout<<"> Underwear Color : ";
	std::cin>>underwear_color;

	std::cout<<"> Darkest Secret : ";
	std::cin>>darkest_secret;

	std::cout<<"------------Contact added------------"<<std::endl;
}

void	Contact::getContact()
{
	std::cout<<"> First Name : "<<first_name<<std::endl;
	std::cout<<"> Last Name : "<<last_name<<std::endl;
	std::cout<<"> Nickname : "<<nick_name<<std::endl;
	std::cout<<"> Login : "<<login_42<<std::endl;
	std::cout<<"> Postal Address : "<<postal_address<<std::endl;
	std::cout<<"> Email Address : "<<email_address<<std::endl;
	std::cout<<"> Phone Number : "<<phone_number<<std::endl;
	std::cout<<"> Birthdate : "<<birhtdate<<std::endl;
	std::cout<<"> Favorite Meal : "<<favorite_meal<<std::endl;
	std::cout<<"> Underwear Color : "<<underwear_color<<std::endl;
	std::cout<<"> Darkest Secret : "<<darkest_secret<<std::endl;

}

std::string	Contact::get_firstname()
{
	return (this->first_name);
}

std::string	Contact::get_lastname()
{
	return (this->last_name);
}

std::string	Contact::get_nickname()
{
	return (this->nick_name);
}
