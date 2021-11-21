#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>

struct Student {
	std::string name, surname, index;
	int term;
	double average;

	Student(std::string name1, std::string surname1, std::string index1, int term1, double average1) {
        	name = name1;
       		surname = surname1;
        	index = index1;
        	term = term1;
        	average = average1;
	}
	Student(){}
};


int main() {
std::string answer1;
std::vector <Student> Studenci;

do {
	int choice;
	std::cout<<"Choose option:\n ";
	std::cout<<"1) Add Student \n 2) Remove Student \n 3) Show list of students \n Your choice: ";
	std::cin>>choice;
	while (choice<0 | choice>3) {
		std::cout<<"Error: Put correct number\n";
		std::cout<<"Your choice: ";
		std::cin>>choice;
	}
	switch(choice) {
	case 1 : {
		int n;
		std::cout<<"How many students do You want to add? :";
		std::cin>>n;

		std::string name2, surname2, index2;
		int term2;
		double average2;

		for (int i=0; i<n; ++i) {
			std::cout<<"Name: ";
			std::cin>>name2;
			std::cout<<"Surname: ";
			std::cin>>surname2;
                	std::cout<<"Index: ";
			std::cin>>index2;
                	std::cout<<"Term: ";
			std::cin>>term2;
                	std::cout<<"Average: ";
			std::cin>>average2;
			Studenci.push_back(Student(name2, surname2, index2, term2, average2));
		}
		break;
	}
	case 3 : {
		std::cout<<"List of students: \n";
		if (Studenci.size()<1)
			std::cout<<"No students\n";
		else
                for (int i=0; i<Studenci.size(); ++i) {
			std::cout<<Studenci[i].name<<", "<<Studenci[i].surname<<", "<<Studenci[i].index<<", "<<Studenci[i].term<<", "<<Studenci[i].average<<std::endl;
		}

		break;
	}
	case 2 : {
		if (Studenci.size()<1) {
			std::cout<<"No students\n";
		}
		else {
		std::string studentremove;
		std::cout<<"Put index of student, which You want to remove: \n";
		std::cin>>studentremove;
		for (int i=0; i<Studenci.size(); ++i) {
			if (Studenci[i].index == studentremove)
			{
				Studenci.erase(Studenci.begin()+i);
				break;
			}
		}
		break;
		}//else
	}//case 2
	}//switch
	using namespace std::literals;
	std::this_thread::sleep_for(1s);
	std::cout<<"Do You want to do something else? y/n : ";
	std::cin>>answer1;
}//do

while (answer1=="y");
return 0;
}
