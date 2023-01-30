#include<stdio.h>
main()
{
	int a,b;
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("\nEnter B: ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n New A:%d",a);
	printf("\n New B:%d",b);
}