/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongkseo <dongkseo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:33:29 by dongkseo          #+#    #+#             */
/*   Updated: 2023/06/08 22:19:57 by dongkseo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		std :: string str;
		for (int i = 1; i < ac; i++)
			str += av[i];
		for (unsigned long i = 0; i < str.length(); i++)
			str[i] = static_cast<char>(std::toupper(str[i]));
		std :: cout << str << std :: endl;
		
	}
	else
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
	return (0);
}