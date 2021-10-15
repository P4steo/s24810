#include <iostream>

auto main(int argc, char* argv[]) -> int
{
	auto const beer =std::stoi(argv[1]);
	std::cout<<beer<<"\n";

	if (beer%5==0 and beer%3==0) {
                std::cout<<"FizzBuzz"<<std::endl;
	}
	else if (beer%3==0) {
		std::cout<<"Fizz"<<std::endl;
	}
	else if (beer%5==0) {
		std::cout<<"Buzz"<<std::endl;
	}
	return 0;
}
