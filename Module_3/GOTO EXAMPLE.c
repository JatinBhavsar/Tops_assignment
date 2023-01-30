#include<stdio.h>
main()
{
	 int a,b,ans,n;
	 char c;
	 
	 again:
	 	printf("Enter A : ");
	 	scanf("%d",&a);
	 	printf("Enter B : ");
	 	scanf("%d",b);
	 	
	 	printf("\n\nSelect Operation to performe : ");
	 	printf("\n1. Addition \n2. subtration \n3. Multiplation \n4. Division");
	 	scanf("%d",&n);
	 	
	 	switch(n)
	 	{
	 		case 1:
	 			ans = a+b;
	 			printf("\n Addition = %d",ans);
	 			break;
	 			
	 			case 2 :
	 				printf("\n Subtration = %d",a-b);
	 				break;
	 				
	 				case 3:
	 					printf("\n Multiplication = %d",a*b);
	 					break;
	 					
	 					case 4 :
	 						printf("\n Division = %d",a/b);
	 						break;
	 						default:
	 							printf("/n INVALID INPUT!!");
						 
		 }
		 printf("\n Do you want to performe another operation ? (y/n)");
		 fflush(stdin);
		 scanf("%c",&c);
		 
		 if(c == 'y')
		 {
		 	goto again;
		 }
		 printf("THANKYOU");
		 
}