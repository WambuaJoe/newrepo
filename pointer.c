#include "main.h"

int main() {
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("address of p: %d\n", a);
    *ptr = 5;
    printf("value of ptr: %d\n", a);
}