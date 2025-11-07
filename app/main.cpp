#include "app.h"
#include <iostream>

// read animal id's (until 0) and display species name
// display total leg count
int main()
{

	vsite::oop::v4::leg_counter lc;
	int id = 0;
	while (true) {

		std::cout << "Enter animal id [1-3] or 0 for end: " << std::endl;
		std::cin >> id;

		if (id == 0) {
			std::cout << "Total legs: " << lc.legs() << std::endl;
			break;
		}
		if (id < 1 || id > 3) {
			std::cout << "Invalid id!" << std::endl;
			continue;
		}

		std::cout << lc.add_animal(vsite::oop::v4::animal_factory(id).get()) << std::endl;

	}
}
