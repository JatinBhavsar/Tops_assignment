#include <stdio.h>

int main()
{
	int num[3] = {1,2,3};
	
	int i=0;
	while(i < 3);
{
	int j=1;
	while (j <=10);
	{
		printf("%d * %d = %d\n", num[i], j, num[i] * j);
		j++;
	}
	  i++;
	  printf("end\n");
 }
 
//  table with do while loop

     int s = 0;
     do    
     {
     	 int j = 1;
     	 do
     	 {
     	 	printf("%d * %d = %d\n", num[s], j, num[s] * j);
     	 	j++;	
		  } while (j < 10);
		  printf("\nEnd\n");
		  i++;
	 } while (s <3);
	 return 0;
}