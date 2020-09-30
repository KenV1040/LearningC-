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

// Once all of these files are evaluated, they get compiled in to machine code

// Solution Configuration
// By default, this is debug
// A configuration is a set of rules that applies to a project

// Solution Platform
// By default this is x86
// What platform we're targeting (32 bit application, x86, or 64bit x64)

// When modifying the project properties (Alt+Enter), make sure your configuration and platform matches your solution config and platform

// By default, optimization is turned off in debug mode, so debug mode is slower

// Each .cpp file gets compiled, not .h (header) files. They get included.
// Every .cpp file gets compiled individually into .obj files. Then it gets stiched together via the "linker"