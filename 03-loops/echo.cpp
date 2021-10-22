#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	
	int n = argc;
	auto tmp2 = std::string{argv[2]};
	auto tmp = std::string{argv[1]};
	if (tmp == "-n") {
		for (auto i=1; i<argc; i++)
		 {
                	std::cout<<argv[i]<<" ";
		 }
	}

	else if (tmp == "-r") {
		for (auto i=argc-1; i>0; i--)
                 {
                        std::cout<<argv[i]<<" ";
                 }
	}

	else if (tmp == "-l") {
		for (auto i=1; i<argc; i++) {
			std::cout<<argv[i]<<"\n"; }
	}
	
	else if (tmp == "-r" && tmp2 == "-l") {
		for (auto i=argc-1; i>0; i--)
                 {
                        std::cout<<argv[i]<<"\n";
                 }
	}
	else if (tmp == "-r" && tmp2 == "-n") {
		for (auto i=argc-1; i>0; i--)
                 {
                        std::cout<<argv[i]<<" ";
                 }
	}




return 0;
}
