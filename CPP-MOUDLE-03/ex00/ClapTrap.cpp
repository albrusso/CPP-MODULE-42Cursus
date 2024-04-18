/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:01:42 by albrusso          #+#    #+#             */
/*   Updated: 2024/04/18 15:51:40 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPt(10), _energyPt(10), _attackDm(0) {
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPt = other._hitPt;
		this->_energyPt = other._energyPt;
		this->_attackDm = other._attackDm;
	}
	return *this;
}
void ClapTrap::attack(const std::string& target) {
	if (this->_energyPt > 0 && this->_hitPt > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDm << " points of damage" << std::endl;
		this->_energyPt = this->_energyPt - 1;
	}
	else
	{
		if (this->_hitPt < 1)
			std::cout << "ClapTrap " << this->_name << " can't attack beacuse is died" << std::endl;
		else
			std::cout << "ClapTrap " << this->_name << " can't attack beacuse doesn't have energy" << std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " lost " << amount << " hit point causing by an attack" << std::endl;
	this->_hitPt = this->_hitPt - amount;
}
void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPt > 0 && this->_hitPt > 0)
	{
		std::cout << "ClapTrap " << this->_name << " restore " << amount << "hit points" << std::endl;
		this->_energyPt = this->_energyPt + amount;
	}
	else
	{
		if (this->_hitPt < 1)
			std::cout << "ClapTrap " << this->_name << " can't restore life beacuse is died" << std::endl;
		else
			std::cout << "ClapTrap " << this->_name << " can't restore life beacuse doesn't have energy" << std::endl;
	}
}

void ClapTrap::printClapTrap(void) const {
	std::cout << "Name:          " << this->_name << std::endl;
	std::cout << "Hit Points:    " << this->_hitPt << std::endl;
	std::cout << "Energy Points: " << this->_energyPt << std::endl;
	std::cout << "Attack Damage: " << this->_attackDm << std::endl;
}