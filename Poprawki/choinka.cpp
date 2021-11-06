#include <iostream>

int main(){
	int h;
	std::cout<<"wysokość: ";
	std::cin>>h;
	for (int i=0; i<h;i++)
	{
		for (int j=1; j<h-i; j++)
			std::cout<<"-";
		for (int j=0; j<2*i +1; j++)
			std::cout<<"*";
		for (int j=h-i; j>1; j--)
			std::cout<<"-";
		std::cout<<std::endl;
	}
	return 0;
}
