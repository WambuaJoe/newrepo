#include "main.h"

int main() {
   /* int a = 10;
    int *ptr;
    ptr = &a;
    printf("address: %d\n", ptr);
    printf("value at address ptr: %d\n", *ptr);
    printf("integer size: %d\n",sizeof(int));
    printf("address ptr+1: %d\n", ptr+1);
    printf("value at address ptr+1: %d\n", *(ptr+1)); */

   /*int a = 1025;
    int *ptr;
    ptr = &a;
    printf("integer size: %d\n", sizeof(int));
    printf("address = %d, value = %d\n", ptr, *ptr);
    printf("address ptr+1 = %d, value ptr+1 = %d\n", ptr+1, *(ptr+1));
    
    char *p0 = (char*)ptr;
    printf("char size: %d\n", sizeof(char));
    printf("address = %d, value = %d\n", p0, *p0);
    printf("address of p0+1 = %d, value = %d\n", p0+1, *(p0+1));
*/

    int i;

    char char_arr[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_arr[5] = {2, 4, 6, 8, 10};

    char *char_ptr = (char *) int_arr;
    int *int_ptr = (int *) char_arr;

    for (i = 0; i < 5; i++) {
        printf("[integer pointer] points to %p, that contains  integer %c\n", int_ptr, *int_ptr);
        int_ptr = (int *)((char *)int_ptr +1);
    }
    for (i = 0; i < 5; i++) {
        printf("[char pointer] points to %p, that contains character %d\n", char_ptr, *char_ptr);
        char_ptr = (char *)((int *)char_ptr +1);
    }
}
