/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:20:07 by joel              #+#    #+#             */
/*   Updated: 2023/07/08 14:21:20 by joel             ###   ########.fr       */
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

void	Contact::print_contact()
{
	std::cout << this->_firstname << std::endl;
	std::cout << this->_lastname << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phonenumber << std::endl;
	std::cout << this->_secret << std::endl;
}