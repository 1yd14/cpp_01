/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:36:50 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/16 16:00:18 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* zombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombies[i].setName(name);
	};
	return (zombies);
}