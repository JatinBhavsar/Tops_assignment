#include <stdio.h>

void main()
{
    printf("How many students you wnats to add? ");
    int no_of_st;
    scanf("%d", &no_of_st);


    struct students
    {
        int roll_num;
        char name[10];
        int std;
    };
    

    struct students st[no_of_st];

    for(int i = 0; i < no_of_st; i++)
    {
        printf("Enter students %d record\n\n", (i+1));
        printf("Enter name: ");
        scanf("%s", &st[i].name);

        printf("\nEnter roll no: ");
        scanf("%d", &st[i].roll_num);
        
        printf("\nEnter class: ");
        scanf("%d", &st[i].std);

    }

    printf("You can retrieve student data.\n\n");

    int rn;
    printf("Enter students roll: ");
    scanf("%d", &rn);

    for(int i = 0; i < no_of_st; i++)
    {
        if(st[i].roll_num == rn)
        {
            printf("name: %s\n", st[i].name);
            printf("roll no: %d\n", st[i].roll_num);
            printf("class: %d\n", st[i].std);

        }
    }
}