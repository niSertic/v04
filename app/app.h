#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 
{
	// Base class
	class animal
	{
	public:
		virtual std::string species() const = 0;
		virtual unsigned legs() const = 0;
		virtual ~animal() = default;
	};

	// Intermediate classes
	class insect : public animal {
	public:
		unsigned legs() const override;
	};

	class spider : public animal {
	public:
		unsigned legs() const override;
	};

	class bird : public animal {
	public:
		unsigned legs() const override;
	};


	// Concrete classes
	class cockroach : public insect {
	public:
		std::string species() const override;
	};

	class tarantula : public spider {
	public:
		std::string species() const override;
	};

	class sparrow : public bird {
	public:
		std::string species() const override;
	};


	// Factory function
	std::unique_ptr<animal> animal_factory(int type);


	// Leg counter
	class leg_counter {

		unsigned total_legs = 0;

	public:
		std::string add_animal(const animal* a);
		unsigned legs() const;
	};

}