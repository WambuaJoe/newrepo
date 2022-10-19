#include "main.h"

struct alx {
    char student[10];
    char course[10];
    int grade;
};

int main() {
    

    struct alx alx1;
    strcpy(alx1.student, "Joe");
    printf("%s\n", alx1.student);

}