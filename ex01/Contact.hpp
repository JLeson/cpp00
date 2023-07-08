/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:19:16 by joel              #+#    #+#             */
/*   Updated: 2023/07/08 14:20:47 by joel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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

	void	set_contact(std::string firstname, std::string lastname, std::string nickname,
							std::string phonenumber, std::string secret);
	void	print_contact();
};
