/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:19:16 by joel              #+#    #+#             */
/*   Updated: 2023/07/12 15:35:20 by fsarkoh          ###   ########.fr       */
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

	void		set_contact(std::string firstname, std::string lastname, std::string nickname,
							std::string phonenumber, std::string secret);
	void		print_contact(void);
	std::string	get_firstname(void);
	std::string	get_lastname(void);
	std::string	get_nickname(void);
};
