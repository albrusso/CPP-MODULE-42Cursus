/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:15:58 by albrusso          #+#    #+#             */
/*   Updated: 2024/04/18 19:54:35 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = name;
	this->_hitPt = 100;
	this->_energyPt = 50;
	this->_attackDm = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPt = other._hitPt;
		this->_energyPt = other._energyPt;
		this->_attackDm = other._attackDm;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	if (this->_energyPt > 0 && this->_hitPt > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDm << " points of damage" << std::endl;
		this->_energyPt = this->_energyPt - 1;
	}
	else
	{
		if (this->_hitPt < 1)
			std::cout << "ScavTrap " << this->_name << " can't attack beacuse is died" << std::endl;
		else
			std::cout << "ScavTrap " << this->_name << " can't attack beacuse doesn't have energy" << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
