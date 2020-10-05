# Which video?

These notes are from [Vid 16](https://youtu.be/DTxHyVn0ODg)

# Notes
- This ep will be talking about *raw* pointers. Not *smart* pointers.
  
## Basic of pointers
- Pointers are important for *managing* and *manipulating* memory.
- Definition of a pointer: 
  > An integer that stores a memory address
- The way memory works in program is that it is one straight blob
  - A way to picture this, would be to picture one long street. With ouses on either side of the street.
  - Each house has an address (which is the house)
  - A pointer is basically the address of where the house is.
- > Memory is the single most important resource you have in a program - TheCherno
- A pointer for all types, is just an int that holds the address. if it's a string pointer, it's still just an int with the address.
- A pointer with a type is essentialy just saying the data at that address is presumably that type.
- void pointers are typeless
  - Declared by doing `void* varname = address`
  - You can set the address to a not valid address, and that's fine(not really, but nothing will stop you). E.g. 0.
  - You can set it to `NULL` or `nullptr`
- Using an `&` in front of an existing variable gets the address of that variable

## The rest of the videos
```
    int var = 8;
    double* ptr = &var; //Errors because the types don't match
    // This can be fixed by doing this:
    double* ptr = (double*)&var;
```

- Types didn't matter here. You can use type to help you manipulate it, but at the end of the day, it doesn't matter too much
- Why not always use void pointers?
  - If you want to change the value at that pointer, you can *de-reference* it.
  - You can dereference it by adding an * in front of the ptr. Like this: `*ptr = 10`
  - However, if this is a void ptr, then it will give you an error because the compiler doesn't know how many bytes to write.
  - This is where types come into play.
  - So in order to change the original var, you must change the variable type of the pointer to an the same variable type as the original variable.

- Most of the time, you are creating variables on the stack.
- To create it to on a heap, you can write `char* buffer = new char[8]`
  - To break it down, a char is 1 byte of memory.
  - And by writing `new char[8]`, you are asking it to assign you 8 bytes of memory. And this return a pointer to the beginning of the block of memory
- Then, use `memset(buffer, 0, 8);`
  - Memset asks it to set the memory with the buffer, followed by what you want to fill it with, in this case, 0. And finally, the size, which we know is 8.
- If you're doing something like this, this is heap allocated and therefore you must delete the memory after manually.
  - To delete the memory, you write `delete[] buffer;`
    - The `[]` is used because you used it when creating the `new char[8]`
- x-amount-of pointers:
  - Point-ception
  - Essentially you'll have a pointer pointing to another variable that is a pointer.