//initializing array using a loop
#include "main.h"

int main() {
    
    int mabonzo[6];
    
    for (int i = 0; i < 6; i++) {
    mabonzo[i] = i + 1;
    }
    printf("%d\n", *(mabonzo + 1));

    return 0;
}