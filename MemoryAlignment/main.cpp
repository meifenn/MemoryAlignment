#include <iostream>
#include<chrono>
#include "Clock.hpp"

using namespace MEI;
struct Struct_A
{
	int age; //4 bytes
	char c;//1 byte
};

int main()
{
	Struct_A sa;
	sa.age = 50;

	std::cout << sizeof(sa) << std::endl;
	/*Clock c1;
	column_ordered();
	c1.print_elapsed();

	c1.start();
	row_ordered();
	c1.print_elapsed();*/

	return 1;
}