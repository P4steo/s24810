#ifndef czas_h
#define czas_h
#include <string>


enum class time_of_day{rano, dzien, wieczor, noc};


struct czas {
        int hour, minute, second;
	time_of_day pora_dnia() const;
        std::string to_string() const;
        void next_hour();
        void next_minute();
        void next_second();
	uint64_t count_seconds() const;
	uint64_t count_minutes() const;
	std::string time_to_midnight();
	czas (int hour2, int minute2, int second2);
        czas ();
};

#endif

