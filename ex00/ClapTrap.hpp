/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:15:19 by crepou            #+#    #+#             */
/*   Updated: 2023/08/13 20:35:23 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTAP_H_
#define CLAPTAP_H_

#include <sstream>
#include <iostream>

class ClapTrap {
	
	private:
		std::string name;
		int	hitPoints = 10;
		int	energyPoints = 10;
		int	attackDamage = 0;
	
	public:
		ClapTrap( std::string _name ); //constructor
		~ClapTrap( void ); //destructor
		ClapTrap(const ClapTrap& obj); //copy constructor
		ClapTrap& operator=(const ClapTrap& obj); //copy assignment operator overload

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif