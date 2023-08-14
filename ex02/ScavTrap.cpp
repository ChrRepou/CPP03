/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:07:26 by crepou            #+#    #+#             */
/*   Updated: 2023/08/14 17:27:22 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string _name ) : ClapTrap(_name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	if (this != &obj) { // Check self-assignment
		name = obj.name;
		attackDamage = obj.attackDamage;
		energyPoints = obj.energyPoints;
		hitPoints = obj.hitPoints;
	}
	return *this; // Return the modified object
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getHinPoints() > 0 && this->getEnergyPoints() > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " 
				<<  target << ", causing " 
				<< this->getAttackDamage() << " points of damage!" 
				<< std::endl;

		this->energyPoints--;
	}
	else
	{
		std::cout << "ScavTrap: " << this->name << " can't do nothing anymore!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << this->name << " is now in Gate keeper mode!" << std::endl;
}