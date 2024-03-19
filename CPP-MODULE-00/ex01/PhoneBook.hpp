/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 23:24:17 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/19 12:21:10 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact book[8];
	int	i;
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	add(void);
	void	search(void);
	Contact	getContact(int n) const;
};
#endif