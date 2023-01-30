//with return type without parameter
#include<stdio.h>
main()
{
//	int a;
//	a = add;
//	printf("\nAddition : %d",a);
	printf("\n Addition : %d",add());
}
int add()
{
    int a,b,ans;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    
    ans = a + b;
    return ans;
}