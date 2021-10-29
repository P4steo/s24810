#include <string>
#include <iostream>
#pragma once
struct Student {
	std::string name, surname, index;
	int term;
	float average;

	std::string to_string() const;

	Student (std::string name2, std::string surname2, std::string s23456, int x, float a);
	Student();


};

