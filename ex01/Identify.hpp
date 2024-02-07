#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include <cstdint>
struct Data
{
	int number;
};
class Serializer;

class Serializer {
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	private:
		Serializer();
		Serializer(const Serializer &other);
		Serializer &operator=(const Serializer &other);
		~Serializer();
};

#endif