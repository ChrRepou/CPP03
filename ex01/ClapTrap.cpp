/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:15:30 by crepou            #+#    #+#             */
/*   Updated: 2023/08/14 16:16:08 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string _name ) : name(_name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
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
	else
	{
		std::cout << "ClapTrap: " << this->name << " can't do nothing anymore!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " takes damage of " 
				<<  amount << " hin points!"
				<< std::endl;

		this->hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
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
	else
	{
		std::cout << "ClapTrap: " << this->name << " can't do nothing anymore!" << std::endl;
	}
}

int ClapTrap::getHinPoints( void )
{
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints( void )
{
	return (this->energyPoints);
}

int ClapTrap::getAttackDamage( void )
{
	return (this->attackDamage);
}

void ClapTrap::printStatus( void )
{
	std::cout << "ClapTrap: " << this->name 
			  << ": Energy points = " << this->getEnergyPoints()
			  << ", Hin points = " << this->getHinPoints()
			  << ", Attack damage = " << this->getAttackDamage()
			  << std::endl;
}