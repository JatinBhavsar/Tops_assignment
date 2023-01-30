#include <stdio.h>

void main()
{
    char name[4][15] = {"Maths", "Science", "English",  "Hindi"};
    int marks[4] = {55, 40, 60, 52};
    int max_marks = 100;
    int passing_marks = 35;


     printf("Subject\t|\tMax_marks\t|\tmarks\n");

     for (int i = 0; i < 4; i++)
     {
        printf("%s\t|\t%d\t|\t%d\n", name[i], max_marks, marks[i]);
     }

     int total = marks[0] + marks[1] + marks[2] + marks[3];
     int percent = total / 4;
     printf("percentage %% is %d", percent);
}