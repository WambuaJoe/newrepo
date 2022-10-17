#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char card_name[3];
    puts("Enter card name: ");
    scanf("%2s", card_name);
    int val = 0;

    switch (card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
    case 'A':
    val = 11;
        val = 11;
        break;    
    default:
        val = atoi(card_name);
        break
        ;
    }
    if ((val > 2) && (val < 11))
        puts("Count has gone up");
    else if(val == 11)
        puts("Count has gone down");
    
        return 0;
}