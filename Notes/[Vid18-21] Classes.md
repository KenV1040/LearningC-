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