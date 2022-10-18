#include <stdlib.h>
#include <stdio.h>
// program to get input from a user
int main() {
    
   char name[20];
    printf("Enter your name: ");
   fgets(name, sizeof(name), stdin);
    //calling the function
    printf("You name is %s\n", name);

    return 0;
}