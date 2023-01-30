
#include<stdio.h>
main()
{
	int a,ans;
	printf ("Enter a Number : ");
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		ans = a * i;
		printf("%d",&ans);
	}
	
}