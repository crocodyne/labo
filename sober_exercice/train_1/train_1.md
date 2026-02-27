## Correction

```c++
int main() {
    node_t n = {.isValid =1, .size = 367, .next = NULL};
    node_t n2;
 
 node_t *n3 = (node_t*)malloc(sizeof(node_t));

    //how to copy n to n2 first solution 
    n2 = n;
    //use memcopy 2nd solution
    memcpy(&n2,&n,sizeof(node_t));
    //declare a pointer n3 which is one node_t
    memcpy(n3,&n, sizeof(node_t));
    //use a buffer and copy n in to the buffer at offset 10 
    char buffer[BUFFER_SIZE];
    //use memset to init the buffer at 0
    memset(buffer, 0, BUFFER_SIZE);
    memcpy(buffer+NODE_OFFSET,&n,sizeof(node_t));
    n3 = (node_t*) (buffer + NODE_OFFSET);
    //use the buffer to int n2 with the content at offset 10
    printf("n3 = %d, %d , %p \n", n3->isValid,n3->size, n3->next);
}
```