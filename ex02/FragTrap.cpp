/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:30:17 by crepou            #+#    #+#             */
/*   Updated: 2023/08/14 17:26:31 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string _name ) : ClapTrap(_name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	if (this != &obj) { // Check self-assignment
		name = obj.name;
		attackDamage = obj.attackDamage;
		energyPoints = obj.energyPoints;
		hitPoints = obj.hitPoints;
	}
	return *this; // Return the modified object
}

void FragTrap::attack(const std::string& target)
{
	if (this->getHinPoints() > 0 && this->getEnergyPoints() > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " 
				<<  target << ", causing " 
				<< this->getAttackDamage() << " points of damage!" 
				<< std::endl;

		this->energyPoints--;
	}
	else
	{
		std::cout << "FragTrap: " << this->name << " can't do nothing anymore!" << std::endl;
	}
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap: " << this->name << " says \"High five guys!\"" << std::endl;
}