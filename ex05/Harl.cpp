/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:09:49 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/19 17:45:02 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Harl.hpp"
#include <iostream>

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my "
				"7XL-double-cheese-triple-pickle-special-ketchup burger."
				" I really do!"
				<< std::endl;
};

void	Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. "
				"You didn’t put enough bacon in my burger! "
				"If you did, I wouldn’t be asking for more!"
				<< std::endl;
};

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free."
				" I’ve been coming for years, whereas you "
				"started working here just last month."
				<< std::endl;
};

void	Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
};

typedef	void	(Harl::*HarlMemFn) ( void );

void	Harl::complain( std::string level ) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlMemFn functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*functions[i])();
			return ;
		}
	};
	std::cout << "Harl doesn't know what to complain about" << std::endl;
}
