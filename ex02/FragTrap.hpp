/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:30:22 by crepou            #+#    #+#             */
/*   Updated: 2023/08/14 17:25:45 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H_
#define FRAGTRAP_H_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:
		FragTrap();
		
	public:
		FragTrap( std::string _name ); //constructor
		~FragTrap( void ); //destructor
		FragTrap(const FragTrap& obj); //copy constructor
		FragTrap& operator=(const FragTrap& obj); //copy assignment operator overload

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif