#ifndef czas_h
#define czas_h
#include <string>


enum class time_of_day{rano, dzien, wieczor, noc};


struct czas {
        int hour, minute, second;
	//funkcje
	czas operator+ (czas const & a) const;
	czas operator- (czas const & a) const;
	bool operator< (czas const & a) const;
	bool operator> (czas const & a) const;
	bool operator== (czas const & a) const;
	bool operator!= (czas const & a) const;

	time_of_day pora_dnia() const;
        std::string to_string() const;
        void next_hour();
        void next_minute();
        void next_second();

        czas (int hour2, int minute2, int second2);
        czas ();
};

#endif

