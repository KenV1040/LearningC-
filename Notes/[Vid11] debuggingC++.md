# Which video?

These notes are from [episode 11](https://youtu.be/0ebzPwixrJA)

# Notes

- This will be broken up into two parts:
  1. Breakpoints
  2. Reading Memory
- Diagnosing the problem with the program
- ***You're*** the mistake. Computer is 99% right.
- There are 3 windows when debugging with breakpoints
  - Auto:
  - Local:
    - Both of these try to show you which variables it thinks are important
  - Watch:
    - Monitor variables that you manually select that you think are important
- There is also memory view. To access it, go to Debug -> Windows -> Memory -> Memory 1
- To find the address of a variable in memory view, there should be an address bar. Just type in &var where var is any variable name
- In debug mode, if you look at A (variable) with the breakpoint set there, you'll see it's all CC instead of random values (because it hasn't been set yet)
  This means it is *uninitialised stack memory*. The compiler knows you want to make a variable here, and fills it with CC. By doing this however, it is doing
  extra things which slows it down. Therefore in release mode, this doesn't happen
- Once the variable changed by step next, then it becomes red.
- In the watch window, if you're watching a pointer, it also shows the address of the variable
-

## Breakpoints

- Basically a pause point at a certain line on the program
- Also allows you to inspect the state of memory at that break point
- Step into: Steps into the current function at the breakpoint, assuming it's paused on a function call
- Step over: Steps over the function, and moves on to the line right below.
- Step out: Steps out of the function of whatever function you're currently in.
- If the yellow arrow is on a line of code, it isn't executed yet. It's on that line but paused. The moment you hit the next button it will execute that line of code.   
- To escape a loop, just set the breakpoint outside of it, then press f5 or continue
- Once in a breakpoint, you can view disassembly (see machine instructions) by right clicking and clicking "go to disassembly"