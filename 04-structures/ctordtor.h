#include <string>
#include <iostream>
struct Destructor {
	std::string word;

Destructor (std::string word1){
	word = word1;
}
~Destructor(){
	std::cout<<word;
	std::cout<<"\nDESTRUCTION!\n";
	}
};


