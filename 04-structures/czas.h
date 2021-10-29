
#ifndef czas_h
#define czas_h
#include <string>

struct czas {
	int hour, minute, second;

	std::string to_string() const;

	void next_hour();
	void next_minute();
	void next_second();

	czas (int hour2, int minute2, int second2);
	czas ();
};

#endif
