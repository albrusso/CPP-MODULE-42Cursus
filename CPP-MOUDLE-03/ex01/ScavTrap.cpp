/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:15:58 by albrusso          #+#    #+#             */
/*   Updated: 2024/04/18 16:22:49 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	this->_name = other._name;
}
ScavTrap::~ScavTrap() {
	
}
void ScavTrap::attack(const std::string &target) {
	
}
void ScavTrap::guardGate() {
	
}