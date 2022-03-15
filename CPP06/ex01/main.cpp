#include <stdint.h>
#include <iostream>
#include <string>

struct Data
{
	std::string name;
	int 		age;
};

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data	*ptr = new Data;
	Data	*new_ptr;
	uintptr_t raw;

	ptr->name = "Roger";
	ptr->age = 42;
	raw = serialize(ptr);
	new_ptr = deserialize(raw);
	std::cout << raw << std::endl;
	std::cout << new_ptr->name << " is " << new_ptr->age << " years old" << std::endl;
	std::cout << ptr << " and " << new_ptr << " and " << &raw << std::endl;

	delete ptr;
}

//reinterpret_cast -> Permet de convertir différents types de pointeurs.