## Correction

```c++
#define NODE_OFFSET 10
#define BUFFER_SIZE 4096


typedef struct packet_t {
    int type;
    int age;
} packet_t;

int main() {
    packet_t *packets =(packet_t*) malloc(sizeof(packet_t) * 10);
    //packet_t *p2 = packets +(2 * sizeof(packet_t));
    //how to replace the line above more simply? 
    packet_t *p2 = packets + 2;
    printf("packet = %p , p2 = %p, sizeof(packet_t) = %lu \n", packets, p2, sizeof(packet_t));
    free(packets);
```