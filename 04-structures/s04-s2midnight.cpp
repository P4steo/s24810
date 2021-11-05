#include "s2midnight.h"
#include <iostream>
#include <string>
std::string czas::to_string() const{
        std::string zmienna;
        if (hour<10) zmienna+="0";
        zmienna += std::to_string(hour) + ":";
        if (minute<10) zmienna+="0";
        zmienna += std::to_string(minute) + ":";
        if (second<10) zmienna+="0";
        zmienna += std::to_string(second);
        return zmienna;
}
uint64_t czas::count_seconds() const{
	uint64_t godzina=hour*60*60;
	uint64_t minuta=minute*60;
	uint64_t wynik;
	wynik=godzina+minuta+second;
	return wynik;
}

uint64_t czas::count_minutes() const{
        uint64_t godzina=hour*60;
        uint64_t wynik;
        wynik=godzina+minute;
        return wynik;
}

std::string czas::time_to_midnight() {
	int godzina=24-hour;
	int minuta=60-minute;
	int sekunda=60-second;
	std::string zmienna;
        if (godzina<10) zmienna+="0";
        zmienna += std::to_string(godzina) + ":";
        if (minuta<10) zmienna+="0";
        zmienna += std::to_string(minuta) + ":";
        if (sekunda<10) zmienna+="0";
        zmienna += std::to_string(sekunda);
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
        time.count_seconds();
	time.time_to_midnight();
        std::cout<<time.to_string();
	std::cout<<" liczba sekund: "<<time.count_seconds();
        std::cout<<" liczba minut: "<<time.count_minutes();
	std::cout<<" czas do północy: "<<time.time_to_midnight();
        return 0;

}

