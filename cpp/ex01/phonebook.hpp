/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongkseo <dongkseo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:05:30 by dongkseo          #+#    #+#             */
/*   Updated: 2023/06/08 22:57:51 by dongkseo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>

class utils{
	private:
		std::string str;
		void	add_string(int num)
		{
			char data;
			if (num < 0)
			{
				num *= -1;
				this->str += "-";
			}
			if (num > 9)
				add_string(num / 10);
			data = (num % 10 + '0');
			this->str += data;
		}
	public:
		std::string my_to_string(int num)
		{
			this->str = str;
			add_string(num);
			return (this->str);
		}
};


# endif