#include "arytmetyka.h"
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
bool True, False;
bool czas::operator< (czas const & a) const {
	if (hour==a.hour && minute==a.minute)
		return second<a.second;
	if (hour==a.hour)
		return minute<a.minute;
	return hour<a.hour;
	}

bool czas::operator> (czas const & a) const {
	if (hour==a.hour && minute==a.minute)
		return second>a.second;
	if (hour==a.hour)
		return minute>a.minute;
	return hour>a.hour;
	}

czas czas::operator+ (czas const & a) const {
	czas wynik (hour, minute, second);
	wynik.second+=a.second;
	if (wynik.second>59) {
		wynik.second-=60;
		wynik.minute++;
	}
	wynik.minute+=a.minute;
	if (wynik.minute>59) {
		wynik.minute-=60;
		wynik.hour++;
	}
	wynik.hour+=a.hour;
	if (wynik.hour>23)
		wynik.hour-=24;
	return wynik;
}
czas czas::operator- (czas const & a) const {
	czas wynik (hour, minute, second);
	wynik.second-=a.second;
	if (wynik.second<0) {
		wynik.second-=60;
		wynik.minute--;
	}
	wynik.minute-=a.minute;
	if (wynik.minute<0) {
		wynik.minute-=60;
		wynik.hour--;
	}
	wynik.hour-=a.hour;
	if (wynik.hour<0)
		wynik.hour-=24;
	return wynik;
}
bool czas::operator== (czas const & a) const {
	if (hour==a.hour && minute==a.minute && second==a.second)
		return True;
	else
		return False;
}
bool czas::operator!= (czas const & a) const {
        if (hour!=a.hour | minute!=a.minute | second!=a.second)
                return True;
	else
		return False;
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
//        time.next_hour();
//        std::cout<<time.to_string();
	czas time2(12,39,59);
	if (time==time2)
		std::cout<<"rowny";
	else
		std::cout<<"nie rowny";
	//czas czas3 = time-time2;
	//std::cout<<czas3.to_string();
        return 0;

}

