#include <iostream>
#include <string>
#include <cmath> //logarytmowanie i potęgowanie
#include <thread> //usleep
#include <chrono> //usleep

double logx_a(double x, double a) {
	return log(a)/log(x);
	}

int main(){

std::string answer;


	std::cout<<"Kalkulator ver. 2.0"<<std::endl;
	std::cin.get();
do{

	std::cout<<"Jakie działanie chcesz wykonać?"<<std::endl;
	std::cout<<"[0] Dodawanie\n[1] Odejmowanie\n[2] Mnożenie\n[3] Dzielenie całkowite\n[4] Dzielenie zmiennoprzecinkowe\n[5] Logarytmowanie\n[6] Potęgowanie\n[7] Procent\nPodaj liczbę: ";
	int liczba;
	std::cin>>liczba;
	if (liczba>7){
		while (liczba>7){
			std::cout<<"Error: Nie ma takiej funkcji\n";
			std::cout<<" Podaj liczbę: ";
			std::cin>>liczba;
		}
	}
	if (liczba<0){
		while (liczba<0){
			std::cout<<"Error: Nie ma takiej funkcji\n";
			std::cout<<" Podaj liczbę: ";
        		std::cin>>liczba;
		}
	}
	double wynik;
	switch(liczba){
		double a, b;
		int c, d;
		case 0:
			std::cout<<"Wybrałeś dodawanie\n";
			std::cout<<"Podaj pierwszą liczbę: ";
			std::cin>>a;
			std::cout<<"Podaj drugą liczbę: ";
			std::cin>>b;
			wynik = a + b;
			break;
		case 1:
			std::cout<<"Wybrałeś odejmowanie\n";
                        std::cout<<"Podaj pierwszą liczbę: ";
                        std::cin>>a;
                        std::cout<<"Podaj drugą liczbę: ";
                        std::cin>>b;
                        wynik = a - b;
			break;
		case 2:
			std::cout<<"Wybrałeś mnożenie\n";
                        std::cout<<"Podaj pierwszą liczbę: ";
                        std::cin>>a;
                        std::cout<<"Podaj drugą liczbę: ";
                        std::cin>>b;
                        wynik = a * b;
			break;
		case 3:
			std::cout<<"Wybrałeś dzielenie całkowite\n";
                        std::cout<<"Podaj pierwszą liczbę: ";
                        std::cin>>c;
                        std::cout<<"Podaj drugą liczbę: ";
                        std::cin>>d;
			if (d!=0){
                        	wynik = c / d;
			}
			else {
				while (d==0){
					std::cout<<"Error: Nie wolno dzielić przez 0!\n";
					std::cout<<"Podaj drugą liczbę: ";
					std::cin>>d;
				}
				wynik = c / d;
			}
			break;
		case 4:
			std::cout<<"Wybrałeś dzielenie zmiennoprzecinkowe\n";
                        std::cout<<"Podaj pierwszą liczbę: ";
                        std::cin>>a;
                        std::cout<<"Podaj drugą liczbę: ";
                        std::cin>>b;
			if (b!=0){
                                wynik = a / b;
                        }
                        else {
                                while (b==0){
                                        std::cout<<"Error: Nie wolno dzielić przez 0!\n";
                                        std::cout<<"Podaj drugą liczbę: ";
                                        std::cin>>b;
                                }
			}
                        wynik = a / b;
                        break;
		case 5:
			std::cout<<"Wybrałeś logarytmowanie\n";
                        std::cout<<"Podaj podstawę: ";
                        std::cin>>a;
                        std::cout<<"Podaj liczbę logarytmowaną: ";
                        std::cin>>b;
                        wynik = logx_a(a,b);
                        break;
		case 6:
			std::cout<<"Wybrałeś potęgowanie\n";
                        std::cout<<"Podaj pierwszą liczbę: ";
                        std::cin>>c;
                        std::cout<<"Podaj drugą liczbę: ";
                        std::cin>>d;
                        wynik = pow(c, d);
                        break;
		case 7:
			std::cout<<"Wybrałeś procenty\n";
                        std::cout<<"Podaj procent: ";
                        std::cin>>a;
                        std::cout<<"Podaj liczbę: ";
                        std::cin>>b;
                        wynik = (a/100)*b;
                        break;

	}
	std::cout<<"Wynik to: "<<wynik<<std::endl;

	using namespace std::literals;
	std::this_thread::sleep_for(2s);
	std::cout<<"Czy chcesz wykonać jeszcze jakieś obliczenia?\n t - jeśli tak\n n - jeśli nie\n:";
	std::cin>>answer;
	if (answer=="n"){
		return 0;
	}
}
	while (answer=="t");
}
