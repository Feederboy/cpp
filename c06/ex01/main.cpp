#include <iostream>
#include <stdint.h>

typedef struct s_data
{
    int val;
}               Data;

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data ptr;
    uintptr_t raw;

    ptr.val = 42;
    std::cout << "ptr = " << ptr.val << std::endl;
	std::cout << "ptr : " << &ptr << std::endl;
	raw = serialize(&ptr);
	std::cout << "raw : " << raw << std::endl;
	std::cout << "deserialized : " << deserialize(raw) << std::endl;

}