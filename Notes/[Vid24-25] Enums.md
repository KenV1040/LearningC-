# Notes from [Vid 24](https://youtu.be/x55jfOd5PEE)
## Enums
- A way to name values.
- Enums by default are 32 bit integers.
- You can specify the type by doing this: `enum Example : variable type`
- It has to be an integer.

# Notes from [Vid 25](https://youtu.be/FXhALMsHwEY)
## Constructors in C++
- A special method that is run every time a class is instantiated
- To create a constructor, it's simply this:
  ```
    ClassName {//Code goes here};
  ```
- You have to manually initialise your vairables to 0 in C++
- You always have a default constructor. However, you can either hide it, by moving it to the private area, or you can call `Log() = delete;`