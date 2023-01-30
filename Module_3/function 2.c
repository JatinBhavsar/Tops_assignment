//without return type with parameter
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	
	add(a,b);
	add(45,12);
}
void add(int c, int d)
{
	int ans;
	ans = c + d;
	printf("\n Addition = %d",ans);
}