#include "header.h"

void pMax(int a, int b);

int main() {
	void pMax();
	
	for (int i = -10; i <= 10; i++) {
		for (int j = -10; j <= 10; j++) {
			pMax(i, j);
		}
	}
	exit(EXIT_SUCCESS);
}

void pMax(int a, int b) {
	int mobiD;

	if (a > b) {
		mobiD = a;
	}
	else {
		mobiD = b;
	}
	printf("larger of %d and %d is %d\n", a, b, mobiD);
}
