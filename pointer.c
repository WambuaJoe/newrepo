#include "main.h"

int main() {
    int a = 10;
    int *ptr = &a;

    printf("address of p: %d\n", ptr);
    printf("value at address of p: %d\n", *ptr);
    printf(" size of integer is %d\n", sizeof(int));
    printf("address of p+1 is %d\n", ptr + 1);
    printf("value at address of p+1 is %d\n", *(ptr + 1));

}