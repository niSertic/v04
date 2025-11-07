#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
	// Intermediate class implementations
	unsigned insect::legs() const
	{
		return 6u;
	}

	unsigned spider::legs() const
	{
		return 8u;
	}

	unsigned bird::legs() const
	{
		return 2u;
	}

	// Concrete class implementations
	std::string cockroach::species() const
	{
		return "cockroach";
	}

	std::string tarantula::species() const
	{
		return "tarantula";
	}

	std::string sparrow::species() const
	{
		return "sparrow";
	}



	// Factory function implementation
	std::unique_ptr<animal> animal_factory(int type)
	{
		switch (type)
		{
		case 1:
			return std::make_unique<cockroach>();
		case 2:
			return std::make_unique<sparrow>();
		case 3:
			return std::make_unique<tarantula>();
		default:
			return nullptr;
		}

	}


	// Leg counter implementation
	std::string leg_counter::add_animal(const animal* a)
	{
		if (a)
		{
			total_legs += a->legs();
			return a->species();
		}
		return "";
	}

	unsigned leg_counter::legs() const
	{
		return total_legs;
	}
}