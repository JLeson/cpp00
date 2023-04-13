/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:48:04 by fsarkoh           #+#    #+#             */
/*   Updated: 2023/04/13 19:41:02 by joel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contact
{
private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phonenumber;
	std::string	_secret;
public:
	Contact();
	~Contact();

	void	set_contact(std::string firstname, std::string lastname, 
						std::string nickname, std::string phonenumber, 
						std::string secret);
	void	print_contact();
};