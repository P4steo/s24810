#include "Student.h"

std::string Student::to_string() const{
	std::string zmienna = "Name: " + name + " Surname: " + surname +
        " Index: " + index + " Term: " + std::to_string(term) + " Average: " + std::to_string(average);
	return zmienna;
}

Student::Student(){};

Student::Student(std::string name1, std::string surname1, std::string index1, int term1, float average1){
	name = name1;
	surname = surname1;
	index = index1;
	term = term1;
	average = average1;
}

int main(){
	Student s("Paweł", "Beiger", "s24810", 1, 5.1);
	std::cout<<s.to_string();
	return 0;
}

