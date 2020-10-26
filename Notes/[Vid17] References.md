# Which video?

These notes are from [Vid 16](https://youtu.be/DTxHyVn0ODg)

# Notes
- References are *not* new variables.
- They are a *reference* to a *variable*
- How a reference looks is: `int& ref = existing_var`
- This is different to when you assign memory addresses to pointers and you use an & next to the variable.
  - E.g. `int* b = &a`
- This is only available in the source code. If you compile it, you'll just have `existing_var`
- You can use this to pass variables by reference. For example `void Increment(int& value)`
- References are syntax sugars. There is nothing you can do with a reference that you can't do with a pointer.
- However, if you can use a reference instead of a pointer, probably should use it since it'll look cleaner.
- You can't change references after already setting the reference
  - E.g.``` int a = 5;
            int b = 8;
            int& ref = a;
            ref = b;
            // This will set a to the value of b. It doesn't change the reference to reference b instead.```
- You have to always initialise a reference. 