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
    float result, num[] = {24, 26, 30, 18, 29.5};

    result = calcSum(num);
    printf("Result = %.2f\n", result);
    return 0;
}

float calcSum(float num[]) {
    float sum = 0.0;

    for (int i = 0; i < 6; i++) {
        sum += num[i];
    }
    return sum;
}
