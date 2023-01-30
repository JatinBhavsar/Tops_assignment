#include<stdio.h>
void main()
{
	int a,b,ans,n;
	
	
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	
	printf("/n/nSelect Operation to perform : ");
	printf("/n1.Addition /n2. Subtraction /n3. Multiplication /n4. Division/n/n");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			ans=a+b;
			printf("/n Addition = %d", ans);
			break;
		case 2:
			printf("/n Subtration =%d",a-b);
			break;
		case 3:
			printf("/n Muliplication = %d",a*b);
			break;
		case 4:
			printf("/n Division = %d",a/b);
			break;
		default:
			printf("/n INVILID INPUT!!");
	}
}