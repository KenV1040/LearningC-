# Which video?
These notes are from [episode 5](https://www.youtube.com/watch?v=SfGuIVzE_Os&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=5&t=159s)

# Solution Configuration
By default, this is debug

A configuration is a set of rules that applies to a project


# Solution Platform
- By default this is x86
- What platform we're targeting (32 bit application, x86, or 64bit x64)
- When modifying the project properties (Alt+Enter), make sure your configuration and platform matches your solution config and platform
- By default, optimization is turned off in debug mode, so debug mode is slower

- Each .cpp file gets compiled, not .h (header) files. They get included.
- Every .cpp file gets compiled individually into .obj files. Then it gets stiched together via the "linker"