#include "main.h"

    
   struct codecamp {
    char StudName[20];
    char course[20];
    char StudID[20];
    double score;
   };
   
int main() {
    struct codecamp student1;
    strcpy(student1.StudID, "a101-ALX");
    strcpy(student1.course, "Introduction to C programming");
    strcpy(student1.StudName, "Joseph Wambua");
    student1.score = 134.43;

    printf("%f", student1.score);
    printf("%c", student1.StudID);
    printf("%c", student1.course);
    printf("%c", student1.StudName);
    return 0;
}