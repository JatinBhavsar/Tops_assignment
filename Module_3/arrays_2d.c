#include <stdio.h>

void main()
{
    int marks[4][2] = {
        {9, 2}, {6, 5}, {8, 7}, {7, 8}};

    // printf("%d", marks[0] [0]);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
}