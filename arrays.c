//arrays in C - declaration, definition, initialization and accessing elements
#include "header.h"
/*int main() {
    int stock[5], i, n, sum = 0;
    double avg;
    //receive input and store in array
   printf("Enter number of elements: ");
   scanf("%d", &n);

   for (i = 0; i < n; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &stock[i]);

    sum += stock[i];
   }
   avg = (double) sum / n;
   printf("Average: %.3lf", avg);
   return 0;
}*/

int main() {
    int array1[2][3] = {{1, 2, 3} , {4, 5, 6,}};
    //array1[0][1] = 4;
    //array1[1][2] = 8;

    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 3; b++) {
            printf("%d ", array1[a][b]);
        }
        printf("\n");
    }
    
    return 0;
}

