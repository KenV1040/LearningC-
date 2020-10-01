# Which video?
These notes are from [episode 8](https://www.youtube.com/watch?v=3tIqpEmWMLI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=8)

# Notes
- Main difference between each data type is really just the size.
- int is typically 4 bytes, however some compilers may change it.
- data types:
  - char (1 byte)
  - short (2 bytes)
  - int (4 bytes)
  - long (4 bytes as well, depending on compiler)
  - long long (8 bytes)
  - float (4 bytes)
  - double (8 bytes)
- You can add unsigned to any of these.
- If you assign a number to a char, and pass it to cout, cout will treat it like a character.
  - For example: char var = 65. Print this out with cout, and you'll see an A
- Printing a boolean to the console will give you a number. Any number not 0 is true
- A boolean is 1 byte because there is no way to address 1 bit (even though it only take up one bit). You can only access bytes at a time
- print *sizeof* to find out the size of a variable type