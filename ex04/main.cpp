/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyvan-de <lyvan-de@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:51:03 by lyvan-de          #+#    #+#             */
/*   Updated: 2025/07/19 17:00:12 by lyvan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string	replaceString(const std::string line, const std::string target, const std::string replace) {
	std::string	result;
	size_t		pos;
	size_t		findPos;

	pos = 0;
	if (target.empty())
		return line;
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
	std::string	line;

	if (argc != 4) {
		std::cout << "Input incorrect" << std::endl;
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream inFile(filename);
	if (!inFile) {
		std::cerr << "cannot read from file" << std::endl;
		return 1;
	}
	std::ofstream outFile(filename + ".replace");
	if (!outFile) {
		std::cerr << "Cannot write to output file" << std::endl;
		return 1;
	}
	while (std::getline(inFile, line)) {
		line = replaceString(line, s1, s2);
		outFile << line << '\n';
	}
	inFile.close();
	outFile.close();
	return 0;
};

