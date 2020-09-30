#include <iostream>
// Anything with a has is a pre-processor statement
// Gets evaluated before we compile the file


void Log(const char*); // definition


int main() 
{
	// The << are just overloaded operators that are basically functions
	std::cout << "Hello world" << std::endl;
	std::cin.get();
	Log("Woo, logging");
	// Will assume you are returning 0 if you don't specify it
	return 0;
}

// Once all of these files are evaluated, they get compiled in to machine code
 