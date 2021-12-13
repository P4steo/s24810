#include "s05-person.h"

int main(){
	Mr on("Bogdan", "Kwiatkowski");
	Mrs ona("Wiola", "Ruminska");

	Person *wsk;
	wsk = &on;
	wsk -> to_string();

	wsk = &ona;
        wsk -> to_string();

	return 0;
}
