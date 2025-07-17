/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:42:37 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/17 17:50:39 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

const std::string& Weapon::getType (void) {
	return type;
}

void Weapon::setType (std::string newType) {
	type = newType;
}