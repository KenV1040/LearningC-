# Which video?
These notes are from [episode 5](https://www.youtube.com/watch?v=SfGuIVzE_Os&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=5)

# Solution Configuration
- By default, this is debug
- A configuration is a set of rules that applies to a project

# Solution Platform
- By default this is x86
- What platform we're targeting (32 bit application, x86, or 64bit x64)
- When modifying the project properties (Alt+Enter), make sure your configuration and platform matches your solution config and platform
- By default, optimization is turned off in debug mode, so debug mode is slower

- Each .cpp file gets compiled, not .h (header) files. They get included.
- Every .cpp file gets compiled individually into .obj files. Then it gets stiched together via the "linker"

# Unrelated
- You can compile each .cpp file seperately by using CTRL+F7
- Error list is basically useless. Look at output window instead.
- If you want to seperate a function into a seperate file, you must include a declaration to whichever cpp file you're using.
- A declaration is a promise that it is there. You can say it is there, even if it isn't there, and the compiler will believe you
- A definition is like a function.
- Linker goes to find the definition of the delcaration you said

# Linker Error
- They look scarier than they are because they provide extra information about the function
- Here is an example of a Linker error
```Severity	Code	Description	Project	File	Line	Suppression State
Error	LNK2019	unresolved external symbol "void __cdecl Log(char const *)" (?Log@@YAXPBD@Z) referenced in function _main	HelloWorld	D:\vs2019Dev\Projects\HelloWorld\HelloWorld\main.obj	1	
```

- the _cdedcl part is the calling convention
- the (?Log@@YAXPBD@Z) is the actual id
- the gist of this message is that there is an unresolved external symbol called Log. In otherwords, it can't find the definition of Log because the Log.cpp file contains a function with a lowercase log instead of upper case Log
- **A linker's job is to resolve symbols**
- The linker will merge the obj files and compile it into an exe