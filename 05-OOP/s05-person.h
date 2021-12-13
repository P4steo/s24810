#include <iostream>
#include <string>
#pragma once

struct Person {
	virtual std::string to_string()=0;
	std::string name;
	std::string surname;
	Person(std::string x, std::string y) {
		name = x;
		surname = y;
	}
};
///////////
struct Mr : Person {
	Mr(std::string name, std::string surname)
	:Person(name, surname)
	{}
	std::string to_string() override {
		std::string tmp = "Mr " + name + surname;
		return tmp;
	}
};
//////////
struct Mrs : Person {
	Mrs(std::string name, std::string surname)
	:Person(name, surname)
	{}
	std::string to_string() override{
		std::string tmp1 = "Mrs" + name + surname;
		return tmp1;
	}
};
//////////
struct King : Person {
	King(std::string name, std::string surname)
	:Person(name, surname)
	{}
	std::string to_string() override{
		std::string tmp2 = "King" + name + surname;
		return tmp2;
	}
};
//////////
struct Queen : Person {
	Queen(std::string name, std::string surname)
	:Person(name, surname)
	{}
	std::string to_string() override{
		std::string tmp3 = "Queen" + name + surname;
		return tmp3;
	}
};
//////////

