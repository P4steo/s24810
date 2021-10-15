#include <iostream>

auto main(int argc, char* argv[]) -> int
{
	auto number = std::stoi(argv[1]);
	while (number >= 0) {
		std::cout<<number<<std::endl;
		number = number - 1;
	}
	return 0;
}
