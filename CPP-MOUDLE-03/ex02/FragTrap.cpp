/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:56:49 by albrusso          #+#    #+#             */
/*   Updated: 2024/04/18 20:08:15 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = name;
	this->_hitPt = 100;
	this->_energyPt = 100;
	this->_attackDm = 30;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPt = other._hitPt;
		this->_energyPt = other._energyPt;
		this->_attackDm = other._attackDm;
	}
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " ask you an high five!" << std::endl;
}
