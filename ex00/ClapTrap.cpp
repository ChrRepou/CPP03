/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:15:30 by crepou            #+#    #+#             */
/*   Updated: 2023/08/14 02:38:40 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap( std::string _name ) : name(_name)
{
	std::cout << "constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "copy constructor called" << std::endl;
	this->name = obj.name;
	this->attackDamage = obj.attackDamage;
	this->energyPoints = obj.energyPoints;
	this->hitPoints = obj.hitPoints;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	if (this != &obj) { // Check self-assignment
		name = obj.name;
		attackDamage = obj.attackDamage;
		energyPoints = obj.energyPoints;
		hitPoints = obj.hitPoints;
	}
	return *this; // Return the modified object
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " 
				<<  target << ", causing " 
				<< this->attackDamage << " points of damage!" 
				<< std::endl;

		this->energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes damage of " 
			  <<  amount << " hin points!"
			  << std::endl;

	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " claims " 
				<<  amount << " hit points!"
				<< std::endl;

		this->hitPoints += amount;
		this->energyPoints--;
	}
}