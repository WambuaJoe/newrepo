//recap of C programming concepts

#include "header.h"
/*
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

//use assingment result to control do and while loops
int main() {
	int input_c;

	while ((input_c = getchar()) != EOF) {
		printf("%c was read\n", input_c);
	}
	exit(EXIT_SUCCESS);
}

int main() {
	char c;
	printf("Enter character: ");
	c = getchar();

	printf("Character entered: ");
	putchar(c);
	printf("\n");

	return 0;
}


// C program to demonstrate putchar() method

int main()
{

  // Get the character to be written
  char chr = '2';

  // Write the Character to stdout
  for (chr = '2'; chr < '8'; chr++)
    putchar(chr);
  printf("\nFuck you too\n");

  return (0);
}*/

int main() {
	int a = 5, b = 10, c;
	
	c = (a < b) ? a : b;

	printf("%d\n", c);
	return 0;
}

