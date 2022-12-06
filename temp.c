#include "header.h"
/*
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
*/


#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
int is_palindrome(listint_t **head)
{
        listint_t *tmp = *head;
        int values, i = 0, cLoop, limit;

        if (head == NULL || *head == NULL)
                return (1);
        while (tmp != NULL)
        {
                i++;
                tmp = tmp->next;
        }
        values = malloc(sizeof(int) * i);
        if (values == NULL)
                return (0);

        tmp = *head;
        for (cLoop = 0; cLoop < i; cLoop++)
        {
                values[cLoop] = tmp->n;
                tmp = tmp->next;
        }

        limit = i /2;
        for (cLoop = 0; cLoop < limit; cLoop++)
                if (values[cLoop] != values[i - 1 - cLoop])
                {
                        free(values);
                        return (0);
                }
        free(values);
        return (1);
}