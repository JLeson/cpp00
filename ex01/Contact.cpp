/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:20:07 by joel              #+#    #+#             */
/*   Updated: 2023/07/08 14:39:29 by joel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awsomephonebook.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void	Contact::set_contact(std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string secret)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->nickname = nickname;
	this->phonenumber = phonenumber;
	this->secret = secret;
}

void	Contact::print_contact(void)
{
	std::cout << this->firstname << std::endl;
	std::cout << this->lastname << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phonenumber << std::endl;
	std::cout << this->secret << std::endl;
}