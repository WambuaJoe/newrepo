#include "header.h"

int main() {
	int i;
	for (i = 0; i < 10; i++) {
		switch (i) {
			case 1:
			case 2:
				printf("1 or 2 \n");
				break;
			case 7:
				printf("7\n");
				break;
			defualt:
				printf("Default\n");
		}
	}
	exit(EXIT_SUCCESS);
}
