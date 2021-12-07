#include "ctordtor.h"
#include <unistd.h>
int main() {
	std::string word3;
	std::cout<<"Put word: ";
	std::cin>>word3;
	usleep(1000000);
	system("clear");
	Destructor word2(word3);
return 0;
}
