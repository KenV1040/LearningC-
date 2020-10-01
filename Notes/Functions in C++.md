# Which video?
These notes are from [episode 9](https://www.youtube.com/watch?v=3tIqpEmWMLI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=9)

# Notes
- Functions aren't part of a class. Methods are part of a class.
- When calling a function, the compiler generates a call instruction
- The compiler has to create an entire stack frame, and also the return address and pass it on to the stack
- Then it needs to jump to the new stack frame which is at a different part of the binary
- Assuming the compiler didn't inline your function
- Main purpose **prevent code duplication**
- Functions must return a value, however if you are not in debug mode, the compiler doesn't say it's wrong. Even if it is.