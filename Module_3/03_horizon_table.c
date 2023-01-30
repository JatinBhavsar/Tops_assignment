#include <stdio.h>
int main()
{
	int number[4] = {5,6,7,8};
	
	//This horizontal table with while loop 
	
	int j = 1;
	while (j < 10)
	{
		int i = 0;
		while (i < 4)
		{
			printf("%d * %d = %d\t", number[i], j, number[i] * j);
			i++;	
		}
		printf("\n");
		j++;
	}
	return 0;
}