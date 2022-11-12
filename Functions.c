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

static int _count = 5;

int main() {
    while (_count--)
    {
        func();
    }
}

void func() {
    static int i = 5;
    i++;
    
    printf("i = %d\t, count = %d\n", i, _count);
}

#define pi 3.14159
#define multiplication(x, y) x * y

int main() {
    printf("%.3f,\n", (pi + 7.259));
    printf("value is %d", multiplication(4,5));

    return 0;
}

int fun()
{
    static int count = 1;
    count++;
    return count;
}

int main()
{
    printf("%d\n", fun());
    printf("%d\n", fun());
    printf("%d\n", fun());

    return 0;
}

extern int variable;

int main() {
    printf("%d\n", variable * 4);

    return 0;
}


int x = 20;//global variable

void function1() {
    printf("%d\n" , x * 2);
}

void function2() {
    printf("%d\n" , x);
}

int main() {

    function1();
    function2();

	return 0;
}

void funct() {
    int x = 2; //local variable
    auto int y = 3; 

    x += 2;
    y += 2;

    printf("\n%d, %d", x, y);
}

int main() {
    funct();

    return 0;
}
*/

int sum(int a) {
    if (a != 0) {
        return a + sum(a -= 1);
    }
    else {
        return a;
    }
}

int main() {
    int numb, result;

    printf("Enter positive integer: ");
    scanf("%d", &numb);

    result = sum(numb);

    printf("sum = %d", result);
    return 0;
}
