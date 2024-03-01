/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 23:27:55 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/04 00:44:44 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->i = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add(void)
{
	int	full = 0;
	std::string	s;

	if (this->i == 7)
	{
		std::cout<<"Book is full! The contact will be overwritten instead of"<<this->book[0].getFirstName()<<std::endl;
		full = 1;
	}
	s = "";
	while (std::cin.eof() && s == "")
	{
		std::cout<<"Enter first name --> ";
		if (std::getline(std::cin, s) && s != "")
			this->book[i].setFisrtName(s);
	}
	s = "";
	while (std::cin.eof() && s == "")
	{
		std::cout<<"Enter last name --> ";
		if (std::getline(std::cin, s) && s != "")
			this->book[i].setLastName(s);
	}
	s = "";
	while (std::cin.eof() && s == "")
	{
		std::cout<<"Enter nickname --> ";
		if (std::getline(std::cin, s) && s != "")
			this->book[i].setNickname(s);
	}
	s = "";
	while (std::cin.eof() && s == "")
	{
		std::cout<<"Enter phone number --> ";
		if (std::getline(std::cin, s) && s != "")
			this->book[i].setPhoneNumber(s);
	}
	s = "";
	while (std::cin.eof() && s == "")
	{
		std::cout<<"Enter darkest secret --> ";
		if (std::getline(std::cin, s) && s != "")
			this->book[i].setDarkestSecret(s);
	}
	this->i++;
	if (full == 1)
		this->i = 0;
}

std::string	addSpace(int j)
{
	std::string tmp;

	while (j)
	{
		tmp.append(" ");
		j--;
	}
	return (tmp);
}

std::string	editStr(std::string s)
{
	if (s.length() > 10)
	{
		s.resize(10);
		s[s.length() - 1] = '.';
	}
	return (s);
}

void	PhoneBook::search(void)
{
	int	n = 0;
	std::string	s = "";

	if (this->i == 0)
		std::cout<<"Book is empty!"<<std::endl;
	else
	{
		std::cout<<"     index|first name| last name|  nickname"<<std::endl;
		while (n < this->i)
		{
			s = addSpace(std::to_string(n).size() - 10);
			s.append(std::to_string(n));
			std::cout<<s<<"|";
			s = addSpace(this->book[n].getFirstName().size() - 10);
			s.append(this->book[n].getFirstName());
			std::cout<<s<<"|";
			s = "";
			s = addSpace(this->book[n].getLastName().size() - 10);
			s.append(this->book[n].getLastName());
			std::cout<<s<<"|";
			s = "";
			s = addSpace(this->book[n].getNickname().size() - 10);
			s.append(this->book[n].getNickname());
			std::cout<<s<<std::endl;
			s = "";
			n++;
		}
		while (std::cin.eof() && s == "")
		{
			std::cout<<"Select an index --> ";
			std::getline(std::cin, s);
			if (s[0] >= '0' && s[0] <= '7')
				break;
			else
				std::cout<<"Wrong index, retry"<<std::endl;
		}
		std::cout << "First Name --> "<<this->book[std::stol(s)].getFirstName() << std::endl;
		std::cout << "Last Name --> " << this->book[std::stol(s)].getLastName() << std::endl;
		std::cout << "Nickname --> " << this->book[std::stol(s)].getNickname() << std::endl;
		std::cout << "Phone Number --> " << this->book[std::stol(s)].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret --> " << this->book[std::stol(s)].getDarkestSecret() << std::endl;
	}
}

Contact	PhoneBook::getContact(int n) const
{
	return(this->book[n]);
}