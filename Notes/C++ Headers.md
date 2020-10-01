# Which video?

These notes are from [episode 10](https://www.youtube.com/watch?v=3tIqpEmWMLI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=10)



# Notes

- What are header files?

  - Files that get included into .cpp files
  - Visual Studio normally adds #pragma once to the header files
  - #pragma is an instruction sent to the compiler, and it basically means "only include this ONCE".
  - It prevents you from including multiple of the same header files into the same *translation unit*

- #pragma once is known as a header guard

- The traditional way of adding a header guard is using #ifndef

  - E.g.:

    ```
    #ifndef _LOG_H 
    
    #define_LOG_H 
    
    *function declarations here*
    
    #endif
    ```

  - This basically checks if there is a _LOG_H signature defined, if not, it'll define it and then it won't run it again because _LOG_H is already defined.

- Use pragma once by default

- Difference between #include"x" or #include<>

  - <> tells you to search include path folders
  - "" uses relative files to include