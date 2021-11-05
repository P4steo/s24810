#include "pora_dnia.h"
#include <iostream>
#include <string>
std::string czas::to_string() const{
	std::string zmienna =
	std::to_string(hour) + ":"
	+ std::to_string(minute) + ":" + std::to_string(second);
	return zmienna;   
}

time_of_day czas::pora_dnia() const {
	if (hour<12 && hour>=6){
		return time_of_day::rano;
	}
	if (hour>=12 && hour<16) {
		return time_of_day::dzien;
	}
	if (hour>=16 && hour<=19) {
		return time_of_day::wieczor;
	}
	if (hour>=19 || hour <6) 
		return time_of_day::noc;
}

void czas::next_hour() {
	hour++;
	if (hour>=24){
		hour=0;
	}
}
void czas::next_minute() {
	minute++;
	if (minute>=60){
		minute=0;
		next_hour();
	}
}
void czas::next_second() {
	second++;
	if(second>=60){
		second=0;
		next_minute();
	}
}

czas::czas(){};

czas::czas(int hour3, int minute3, int second3){
	hour = hour3;
	minute = minute3;
	second = second3;
}

int main(){
	czas time(12,59,59);
	time.next_hour();
	std::cout<<time.to_string();
	if (time.pora_dnia() == time_of_day::rano)
		std::cout<<"rano"<<std::endl;
	 if (time.pora_dnia() == time_of_day::dzien)
               std::cout<<"poludnie"<<std::endl;
	 if (time.pora_dnia() == time_of_day::wieczor)
                std::cout<<"wieczor"<<std::endl;
	 if (time.pora_dnia() == time_of_day::noc)
                std::cout<<"noc"<<std::endl;
	return 0;

}
