// this program is used to determine the current month using the switch statement
#include <stdlib.h>
#include <stdio.h>

int main() {
    char Month[12];
    printf("Enter the current month: ");
    scanf("%s", Month);
    int Month = 7;

    switch (Month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
        printf("March\n");
            break;
        case 4:
        printf("April\n");
            break;
        case 5:
        printf("May\n");
            break;
        case 6:
        printf("June\n");
            break;
        default:
        printf("Looking forward to the holidays\n");
            break;

    }
}