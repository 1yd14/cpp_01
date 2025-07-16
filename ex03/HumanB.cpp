/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:42:31 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/16 17:34:07 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/HumanB.hpp"
#include <iostream>

HumanB::HumanB (std::string name, Weapon weapon) {
	this->name = name;
	this->weapon = weapon;
};

void HumanB::attack (void) {
	std::cout << name << " attacks with their " << weapon->getType();
}