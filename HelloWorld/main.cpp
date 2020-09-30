#include <iostream>
// Anything with a has is a pre-processor statement
// Gets evaluated before we compile the file
int main() 
{
	// The << are just overloaded operators that are basically functions
	std::cout << "Hello world" << std::endl;
	std::cin.get();

	// Will assume you are returning 0 if you don't specify it
	return 0;
}