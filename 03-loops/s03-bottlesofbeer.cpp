#include <iostream>

auto main(int argc, char* argv[]) -> int
{
    auto const buttles = std::stoi(argv[1]);

    for(int i = buttles; i > 0; i--){
	if(i > 2){
            std::cout<<i<< " bottles of beer on the wall, "<<"\n"; 
            std::cout<<"Take one down, pass it around, "<<"\n";
            std::cout<<i-1<< " bottles of beer on the wall. \n";
        } 
	else if(i == 2){
            std::cout<<i<< " bottles of beer on the wall, "<<"\n";
            std::cout<<"Take one down, pass it around, "<<"\n";
            std::cout<<i-1<< " bottles of beer on the wall. \n";
 }
	else {
            std::cout<<i<< " bottles of beer on the wall, "<<"\n";
            std::cout<<"Take one down, pass it around, "<<"\n";
            std::cout<<i-1<< " bottles of beer on the wall. \n";}
    }

		std::cout<< "No more buttles of beer on the wall, "<<"\n";
		std::cout<< "Got to the store and buy some more, "<<"\n";
		std::cout<< buttles << " botteles of beer on the wall... \n";

    return 0;

}
