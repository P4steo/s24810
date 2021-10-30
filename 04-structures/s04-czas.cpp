#include "czas.h"
#include <iostream>
#include <string>

std::string czas::to_string() const{
	std::string zmienna = std::to_string(hour) + ":"
	+ std::to_string(minute) + ":" + std::to_string(second);
	return zmienna; 
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
	czas time(23,59,59);
	time.next_hour();
	std::cout<<time.to_string();
	return 0;
}
