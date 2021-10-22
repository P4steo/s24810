#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
	auto const password = std::string{argv[1]};
	auto zmienna = std::string{};
	while (zmienna!=password){
		std::cout<<"Password: ";
		std::getline(std::cin, zmienna);
	}
	std::cout<<"ok!"<<std::endl;
	return 0;
}
