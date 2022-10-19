#include "main.h"

    
   struct codecamp {
    char StudName[20];
    char course[20];
    char StudID[20];
    double score;
   };
   
int main() {
    char name[10];
    char course[20];
    char studID[20];
    printf("Enter Name\n: ");
    scanf("%s", name);
    printf("Enter Course\n: ");
    scanf("%s", course);
    printf("Enter Stud ID\n: ");
    scanf("%s", studID);
    


    struct codecamp student1;
    strcpy(student1.StudName, name);
    strcpy(student1.course, course);
    strcpy(student1.StudID, studID);
    student1.score = 134.43;
    
    printf("\n\nThe student name is %s\n", student1.StudName);
    printf("The course is %s\n", student1.course);
    printf("Student ID is %s\n", student1.StudID);
    printf("The score is %lf\n", student1.score);

    return 0;
}