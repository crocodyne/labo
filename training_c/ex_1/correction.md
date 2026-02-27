## Correction

C as several version : **c89** and **c99** 

For read and write in file we need to use **stdio.h**

```c
#include <stdlib.h>
#include <stdio.h>

//create un function sum who add two args
int sum(int a, int b) {
    return a+b;
}

int main(int argc, char** argv) {
    int x = 500;

    void *pt = &x;
    //__how_to_display value of x by pt
    printf("x -> %d", *(int *)pt);
    
    //pt is now function sum
    pt = sum;
    //display the value of sum 3 +4 
    printf("sum 2 + 3 is -> %d", ((int(*)(int,int))pt)(3,4));

    //create a tab of char a with apple
    //create a tab of char b with banana
    //compare a and b for say that apple is before banana
    char a[]="apple";
    char b[]="banana";
    if(strcmp(a,b) < 0) {
        printf(" apple is before banana");
    }
    return 0;
    //Declare an int name age with value 10
    int age = 10;
    // Declare a pointeur ptAge which take age adress
    int *ptAge = &age;
    // display the value of age by ptAge
    printf("age is %d \n", *ptAge);
    //create a chaine1 with size 100 and value "Salut "
    char chaine1[100]="Salut ";
    //create chaine 2 with size is automatic and value mateo21
    char chaine2[] = "mateo21";
    //concat chaine 2 in chaine 1 and display it
    strcat(chaine1, chaine2);
    printf("%s", chaine 1);
}
```