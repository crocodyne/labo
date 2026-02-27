## Remind
framework for test in **C**

    - minunit 
    - unity 
    - ceedling

how to delete **assert** insertion in code?
```bash
gcc -DNDEBUG
```

how to see binary file :

```bash
hexdump -C myfile.txt
```
or on web site : https://hexed.it

how to see stack trace in **gdb**

with command: **bt**

**static** keyword for limit the scope of a function to a file, for create a local variable which save the state.

**extern** keyword for say the variable is defined somwhere else
## Correction 

in file **ex2.hpp**
```c++
#pragma once
//declare an enum Volume with WEAK | AVERAGE | STRONG 
typedef enum Volume Volume;
enum Volume {
    WEAK, AVERAGE,STRONG
}
//__ declare an alias of struct
typedef struct Coord Coord;
struct Coord {
    int x;
    int y;
};
```

in file **ex2.cpp**

```c++
struct Coord point
```