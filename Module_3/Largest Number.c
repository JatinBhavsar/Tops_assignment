#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("/n Enter A : ");
	scanf("%d",&a);
	printf("/n Enter B : ");
	scanf("%d",&b);
	printf("/n Enter C : ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("/n A is Largest Number.");
		}
		else
		{
			printf("/n C is Largest Number.");
		}
	}
	else
	{
		if(b>c)
		{
			printf("/nB is Largest Number.");
		}
		else
		{
			printf ("/nC is Largest Number.");
		}
	
	}
}
	