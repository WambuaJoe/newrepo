//understanding C pointers

#include "header.h"

void goSouthEast(int *latitude, int *longitude) {
    *latitude = *latitude - 1;
    *longitude = *longitude + 1;
}

int main() {
    int latitude = 40;
    int longitude = -45;

    goSouthEast(&latitude, &longitude);
    printf("You're at [%d, %d]\n", latitude, longitude);

    return 0;
}