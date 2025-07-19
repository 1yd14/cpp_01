/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:51:03 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/19 16:32:51 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

//bool	fileExists(const std::string& filename) {
//	std::ifstream file(filename);
//	return file.good();
//}

std::string	replaceString(const std::string line, const std::string target, const std::string replace) {
	std::string	result;
	size_t		pos;
	size_t		findPos;
	
	pos = 0;
	while((findPos = line.find(target, pos)) != std::string::npos) {
		result.append(line, pos, findPos - pos);
		result.append(replace);
		pos = findPos + target.length();
	}
	result.append(line, pos, std::string::npos);
	return result;
}

int	main(int argc, char* argv[]){
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::string	output;

	if (argc != 4) {
		std::cout << "Input incorrect" << std::endl;
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	//std::ifstream inFile(filename);
	//if (!inFile) {
	//	std::cerr << "cannot read from file" << std::endl;
	//	return 1;
	//}
	//std::ofstream outFile(filename + ".replace");
	//if (!outFile) {
	//	std::cerr << "Cannot write to file" << std::endl;
	//	return 1;
	//}
	output = replaceString(filename, s1, s2);
	std::cout << output << std::endl;
};

