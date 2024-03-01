/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:58:33 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/01 15:21:30 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string.h>
# include <iostream>

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
public:
	void	getFirstName(std::string);
	void	getLastName();
	void	getNickname();
	void	getPhoneNumber();
	void	getDarkestSecret();
	Contact();
	~Contact();
};

#endif