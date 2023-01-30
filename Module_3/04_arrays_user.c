#include <stdio.h>
int main()
{
	
	int a;
	int b;
	
	printf("How many items you want to add ?");
	scanf("%d", &a);
	
	int num[a];
	
	int i = 0;
	while (i < a)
	{
		printf("Add value %d: ", i + 1);
		scanf("%d", &b);
		num[i] = b;
		i++;
		
	}
	
	//int i = 0;
	int j = 0;
	while (j < a)
	{
		printf("value %d", num[j]);
		printf("\n");
		j++;
	}
	return 0;
}