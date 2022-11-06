//recap of C programming concepts

#include "header.h"

#define length 5
#define height 2
#define newLine '\n'


int main() {
    int hypotenuse;
    
    hypotenuse = ((length * length) * (height * height));
    printf("value of hypotenuse is: %d cm,", hypotenuse);
    printf("\tremainder is: %d cm", (hypotenuse % 3));
    printf("%c", newLine);
    
}