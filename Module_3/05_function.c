#include <stdio.h>

void printtable(); //function declaration

int main()
{
	//table function with if else statement and while loops.
	
	printtable(); //function call
	
	return 0;
}
void printtable() //function defination
{
	int s;
	char yn;
	
	printf("Enter how many number of tables your want : ");
	scanf("%d", &s);
	
	int num[s];
	
	int i = 0;
	while (i < s);
	{
		printf("Enter number of %d table : ", i + 1);
		scanf("%d", &num[i]);
		
		i++;
	}
	fflush(stdin);
	printf("Enter for horizontal table or v for verticle : ");
	scanf("%c", &yn);
	
	if(yn == 'h')
	{
	int k = 1;
	while (k <= 10)
	{
		int j = 0;
		while (j < s)
		{
			printf("%d * %d = %d\t", num[j], k, num[j] * k);
			j++;
		}
		printf("\n");
		k++;
		}	
	}
	else if (yn == 'v')
	{
		int j = 0;
		while(j < s)
		{
			int k = 1;
			while (k <= 10)
			{
				printf("%d * %d = %d\n", num[j], k, num[j] * k);
				k++;
			}
			printf("\n");
			j++;
			
		}
	}
	else
	{
		printf("Enter a valid sequence like horizontal or vertical");
	}
}