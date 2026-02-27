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

//static declaration all life of prgm
int my_var = 80;

int main() {
    //dynamic 
    int *x = (int *) malloc(sizeof(int));//give me space for one int
    int *arr = (int *) malloc(sizeof(int) * 100);//give me space for 100 ints

    *x = 120;
    arr[90] = 0xFEEDBEEF;
    arr[101] = 8; //OUT OF BOUNDS. this is bad

    free(arr);//i don't want this memory anymore
    arr = NULL;
    double *darr;
    printf("darr -> %p \n", darr);
    darr = (double *) calloc(sizeof(double),100);
    printf("darr -> %p \n", darr);
    //is the same as -- darr = malloc(sizeof(double)*100);
    darr = (double *) realloc(darr,sizeof(double) * 500);//resize the pointer is not the same than the origin pointer
    printf("darr -> %p \n", darr);


    return 0;
}