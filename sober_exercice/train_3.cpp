#include <fmt/core.h>
#include <bitset>
#include <vector>
#include <map>
#include <thread>
#include <iostream>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


//2nd step use typedef for naming your fn pointer
/* ___?___ */ ;

int add(int a, int b) {return a+b;}
int mult(int a, int b) {return a*b;}

//first definite a function do_operator which takes three arg : a fn pointer, an int x , an int y
int do_operation(/*****/) {
    return /* __?__ */;
}

//2nd step use your typedef naming for fn do_operation
int do_operation(/* __?__ */) {
    return /* __?__*/;
}

int main() {
    int res = do_operation(/*add, 5, 34*/);
    int res_2 = do_operation(/*mult, 2 , 5*/);
    printf(" res : %d - res2 : %d \n", res, res_2);
    return 0;
}