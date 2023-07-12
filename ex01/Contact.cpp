/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:20:07 by joel              #+#    #+#             */
/*   Updated: 2023/07/12 15:36:17 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awsomephonebook.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void	Contact::set_contact(std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string secret)
{
	this->_firstname = firstname;
	this->_lastname = lastname;
	this->_nickname = nickname;
	this->_phonenumber = phonenumber;
	this->_secret = secret;
}

void	Contact::print_contact(void)
{
	std::cout << this->_firstname << std::endl;
	std::cout << this->_lastname << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phonenumber << std::endl;
	std::cout << this->_secret << std::endl;
}

std::string	Contact::get_firstname(void)
{
	return this->_firstname;
}

std::string	Contact::get_lastname(void)
{
	return this->_lastname;
}

std::string	Contact::get_nickname(void)
{
	return this->_nickname;
}
