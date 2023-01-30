#include<stdio.h>
main()
{
	int i;
//	printf("Enter a value : ");
//	scanf("%d",&i);
//	while(i!0);
//	{
//		printf("I = %d",i);
//		printf("\n Enter a value : ");
//		scanf("%d",&i);
//	}
//	printf("\nYou Entered Zero.")

       do
       {
       	printf("\n Enter a value : ");
       	scanf("%d",&i);
       	printf("I = %d",i);
	   } while (i!=0);
	   printf("\n You Entered Zero.");
}