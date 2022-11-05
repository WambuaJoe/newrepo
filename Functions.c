// defining, declaring and calling functions
#include "header.h"
/*
type functName(parameter1, parameter2, parameterN) {
    //block of code
    return(); //only if function is defined without a void type
}

void mabonzo(char bonzo[]) {
    printf("Mbwa wewe %s\n", bonzo);
}

int main() {
    mabonzo("Wambua");
    return 0;
}
*/
// function that returns a result after parameter arithmetic after function call
/*int funct1(int j, int k) {
    return 5 * (j * k);
}

int main() {
    int total = funct1(10, 20);
    printf("total is : %d\n", total);
    
    return 0;
}

// function declaration and definition
/*
type functName(parameter1, parameter2, paremeterN); //declaration

//main method
int main() {
    returnType variable = functName(parameter1, parameter2, parameterN);    //invoke function
    // block of code
    return 0;
}

//definition

type functName(parameter1, parameter2, parameterN) {
    return (parameter operationName);
}

*/

int func();

int main() {
    int i = func();
}

int func() {

    return 0;
}