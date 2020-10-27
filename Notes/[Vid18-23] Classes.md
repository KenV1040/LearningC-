# Notes from [Vid 18](https://youtu.be/2BP8NhxjrO0)
## Classes
- Can contain functions and variables.
- Keeps code clean
- There to make our code more organised
  

# Notes from [Vid 19](https://youtu.be/2BP8NhxjrO0)
## Classes vs Structs
- There is basically no difference. **Nice**.
- Class has members private by default
- Struct members is public by default.
- Mainly used for backwards compatibility with C.
- C has Structs, but not classes.
- You can use a #define to re-define structs with classes.
- Cherno likes using structs just to represent Plain Old Data (POD).
  - E.g. a collection of variables and maybe some simple methods.
  - Using classes when you need inheritance.

# Notes from [Vid 20](https://youtu.be/3dHBFBw13E0)
- There is none. This was a mainly coding video

# Notes from [Vid 21](https://youtu.be/f3FVU-iwNuA)
## What static means
- Has 2 meanings, depending on the context
- The 2 context are:
  - Using static inside a class
    - That variable will share the same memory across all instances of that class
  - Using static outside of a class
    - Linkage of that symbol is only visible to the translation unit
- You can mark a variable with extern, so the linker will look for that definition in another translation unit
- Try and mark your global variables static unless you  need it linked across translation units.

# Notes from [Vid 22](https://youtu.be/V-BFlMrBtqQ)
## Static for Classes and Structs
- Marking two variables static inside a class/struct would make you unable to initialise them normally.
  - You'll have to define it first with `int Classname::VariableName;`
- Referring to static variables:
  - Refer to them like this:  `Classname::variableName = value;`
- A method has a hidden parameter, the class instance, and it gets passed to the method.
- However, when marking a method as static, it doesn't pass the class instance because it has a global instance. So therefore you are unable
  to refer to non-static variables inside a static method
  - You can however, pass an instance explicitly to the static method.

# Notes from [Vid 23](https://youtu.be/f7mtWD9GdJ4)
## Local static in C++
- When creating a variable, you have to consider two factors
  - Lifetime: How long a variable sticks around for before deleted in memory
  - Scope: where it can be accessed.
- Static in a function scope is similar to being in a class scope.
- If declaring a variable inside a function scope with static keyword, every time you call that fuction, it doesn't re-initialise the variable
  - E.g.
  ```
    void function() {
      static int i = 0;
      i++;
      cout << i;
    };
  ```
  - If you call this function multiple times, then you can see i incrementing every time.
  - If you call this function *without* static, then this function always print out 1. Because it keeps on
    declaring int i = 0; then incrementing it by 1 every time you call the function
- You can make a Singleton class, which will only have a *single* instance.
  - By using a local static variable inside a method (constructor I think?) that refers to the class name.
  - Make sure that method returns a reference to the class name