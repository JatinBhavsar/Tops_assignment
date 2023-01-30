#include<stdio.h>
main()
{
	int n;  //char c
	printf("Enter A Number between 1 to 7 : ");
	scanf("%d",&n);  //%c,&c
	
	switch(n)  //switch(c)
	{
		case 1:  //case 1: case'a'
			printf("/n Sunday!!");
			break;
		case 2:
			printf("/n Monday");
			break;
		case 3:
			printf("/n Tuesday");
			break;
		case 4 :
			printf("/n Wednesday");
			break;
		case 5:
			printf("/n Thursday");
			break;
		case 6:
		    printf("/n Friday");
		    break;
		case 7:
			printf("/n Saturday");
			break;
			default:
				printf("/nINVALID INPUT!!");
	}
	
}