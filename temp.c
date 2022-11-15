#include "header.h"

int main() {
	char chr;
	printf("Enter character: ");
	scanf("%c", &chr);

	if (chr == 'J') {
		printf("You did it!\n");
		exit(0);
	}
	else {
		printf("Wrong character, you fucking twat\n");
	}
	return 0;
}
