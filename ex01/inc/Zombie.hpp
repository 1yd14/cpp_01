/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:00:16 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/16 15:53:55 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class	Zombie {
private:
	std::string name;
	
public:
	Zombie (void);
	~Zombie (void);
	void	announce(void);
	void	setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
