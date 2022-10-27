#include "main.h"

int main(void)
{
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

    void *void_ptr;
    void_ptr = (void *) int_arr;

    /*char *char_ptr = (char *) int_arr;
    int *int_ptr = (int *) char_arr;
    */

    for (i = 0; i < 5; i++) {
        printf("[integer pointer] points to %p, that contains  integer %d\n", void_ptr, *((int *) void_ptr));
        void_ptr = (void *)((int *) void_ptr +1);
    }

    void_ptr = (void *) char_arr;
    for (i = 0; i < 5; i++) {
        printf("[char pointer] points to %p, that contains character %c\n", void_ptr, *((char *) void_ptr));
       void_ptr = (void *)((char *) void_ptr +1);
    }
}
