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
	/*Struct_A sa;
	sa.age = 50;

	std::cout << sizeof(sa) << std::endl;*/
	/*Clock c1;
	column_ordered();
	c1.print_elapsed();

	c1.start();
	row_ordered();
	c1.print_elapsed();*/

	size_t poolSize = 1000;
	void* pool = std::malloc(poolSize); //mem allocate

	//int* p_int = reinterpret_cast<int*>(pool); 
	//*p_int = 5; //point to 0 byte from start
	//*(p_int + 1) = 6;// point to 4 bytes from start
	//*(p_int + 2) = 7;//point to 8 bytes from start

	char* p_char = reinterpret_cast<char*>(pool);
	*p_char = 5; //point to 0 byte from start
	*(p_char + 4) = 6;// point to 4 bytes from start
	*(p_char + 8) = 7;//point to 8 bytes from start

	std::cout << *reinterpret_cast<int*>(pool);
	std::free(pool);// free the memory

	return 1;
}