## Correction

```c++
//2nd step use typedef for naming your fn pointer
typedef int(*other_p)(int, int) ;

int add(int a, int b) {return a+b;}
int mult(int a, int b) {return a*b;}

//first definite a function do_operator which takes three arg : a fn pointer, an int x , an int y
int do_operation(int(*op)(int, int) ,int a, int b) {
    return op(a, b);
}

//2nd step use your typedef naming for fn do_operation
int do_operation_other(other_p p, int a, int b) {
    return p(a, b);
}

int main() {
    int res = do_operation(add, 5, 34);
    int res_2 = do_operation(mult, 2 , 5);
    printf(" res : %d - res2 : %d \n", res, res_2);
    return 0;
}
```