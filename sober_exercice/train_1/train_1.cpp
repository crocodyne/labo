#include <fmt/core.h>
#include <bitset>
#include <vector>
#include <map>
#include <thread>
#include <iostream>
#include <sstream>
#include <fstream>
#include <stdio.h>

#define NODE_OFFSET 10
#define BUFFER_SIZE 4096


typedef struct node{
    unsigned int isValid : 1;
    unsigned int size : 15;
    struct node * next;
}node_t;

int main() {
    node_t n = {.isValid =1, .size = 367, .next = NULL};
    node_t n2;
    //declare a pointer n3 which is one node_t

    //how to copy n to n2 first solution 
    
    //use memcpy 2nd solution

    //use a buffer and copy n in to the buffer at offset 10 
    //use memset to init the buffer at 0
    
    //use the buffer to int n2 with the content at offset 10

}