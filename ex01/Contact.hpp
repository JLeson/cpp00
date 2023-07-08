/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:19:16 by joel              #+#    #+#             */
/*   Updated: 2023/07/08 14:39:12 by joel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Contact
{
public:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	secret;

	Contact();
	~Contact();

	void	set_contact(std::string firstname, std::string lastname, std::string nickname,
							std::string phonenumber, std::string secret);
	void	print_contact(void);
};
