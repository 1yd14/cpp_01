/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:42:31 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/17 17:57:27 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/HumanB.hpp"
#include <iostream>

HumanB::HumanB (std::string name) {
	this->name = name;
	weapon = nullptr;
};

void HumanB::attack (void) {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
};

void HumanB::setWeapon (Weapon &newWeapon) {
	weapon = &newWeapon;
};
