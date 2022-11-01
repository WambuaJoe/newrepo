//bitwise operations

#include "header.h"

int main() {
    char x = 1, y =3;
    
    if(x & y) {
        printf("result of x&y = 1\n");
    }
    if (x && y) {
        printf("result of x&&y = 1");
    }

    return 0;
}
