#include<stdio.h>
main()
{
	int y;
	printf("/n Enter a year:");
	scanf("%d",&y);
	
	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
			{
				printf("/n Leap Year!!");
			}
			else
			{
				printf("/n Not a Leap Year!!");
			}
		}
		else
		{
			printf("/n Leap Year!!");
		}
	}
	else
	{
		printf("/n Not A Leap Year");
	}
}