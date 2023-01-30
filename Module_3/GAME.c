#include<stdio.h>
main()
{
	char c,ans;
	printf("WELCOME TO KBC\n\n");
	again:
	printf("This is your 1st question : ");
	printf("What is 4+5 ? \n\n");
	printf("\na.5 \t");
	printf("\nb.9 \t");
	printf("\nc.10 \t");
	printf("\nd.4 \t");
	scanf("%c",&ans);
	 
	 if(ans =!'b')
	 {
	 	printf("Your answer is wrong please try again");
	 	goto again;
	 }
	  if(ans == 'b')
	 {
	 	printf("Your answer is correct");
	 }
	
}