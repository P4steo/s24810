#include <iostream>
#include <random>
#include <string>

auto main() -> int
{
	std::random_device rd;
	std::uniform_int_distribution<int> d100 (1,100);
	
	auto const random = d100 (rd);
	std::cout<<random<<std::endl;

	auto guess_input = std::string{};
	std::cout<<"Guess: ";
	std::getline(std::cin, guess_input);
	int guess_number=std::stoi(guess_input);
	if (guess_number<random) {
		std::cout<<"Too small\n";
	}
	else if (guess_number>random) {
		std::cout<<"Too big\n";
	}
	else if (guess_number==random) {
		std::cout<<"Congratulation!\n";
	} 
	
	while (guess_number!=random)
	{
		std::cout<<"Guess: ";
		std::getline(std::cin, guess_input);
		int guess_number=std::stoi(guess_input);
		if (guess_number<random) {
			std::cout<<"Too small\n";
		}
		else if (guess_number>random) {
			std::cout<<"Too big\n";
		}
		else if (guess_number==random) {
			break; }
	}
	std::cout<<"Congratulations!\n";
	return 0;
}
