#include <stdio.h>
main()
{
	double num;
	printf("/n Enter a number: ");
	scanf("%f",&num);
	
	if (num<=0.0)
	{
		if (num==0.0)
		printf("/n Your entered 0.");
		
		else 
		printf("/n Your entered a negative number.");
	}
	else
	printf("/n Your entered a positive number.");
	
	return 0;
}