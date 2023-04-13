/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:51:11 by fsarkoh           #+#    #+#             */
/*   Updated: 2023/04/13 16:30:45 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void	add(void)
{
	std::cout << "add contact" << std::endl;
}

static void	search(void)
{
	std::cout << "search contact" << std::endl;
}

int	main(void)
{
	std::string	command;

	while (true)
	{
		std::cin >> command;
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
			add();
		else if (command == "SEARCH")
			search();
	}
}