#include <stdio.h>

void main() {
    

    struct marksheet_form {
        int roll_num;
        char name[5][20];
        char subjects[5][20];
        int max_marks;
        int obtained_marks[5];
        int total_obt_marks;
    };

    struct marksheet_form marksheet[5];

    char name[5][20] = {"Jatin", "Meet", "Divyang", "Dev", "Amit"};
    char subjects[5][20] = {"Maths", "Science", "English", "Hindi", "Gujararti"};

    marksheet[0].roll_num = 1; 
    

}