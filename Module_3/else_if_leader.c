#include<stdio.h>
main()
{
	int m1, m2, m3, m4, m5, sum;
	float per;
	 
	 printf ("/nEnter m1: ");
	 scanf ("%d",&m1);
 	 printf ("/n Enter m2:");
 	 scanf ("%d",&m2);
 	 printf ("/n Enter m3:");
 	 scanf ("%d",&m3);
 	 printf ("/n Enter m4:");
 	 scanf("%d",&m4);
 	 printf ("/n Enter m5:");
 	 scanf ("%d",&m5);
 	 
 	 sum = m1+m2+m3+m4+m5;
 	 printf ("/ntotal mark obtain:%d",sum);
 	 
 	 per = sum/5;
 	 printf("/n percentage is:%f",per);
 	 
 	 if(per>75)
 	 {
 	 	printf("/nDistinction");
	  }
	  else if(per>65)
	  {
	  	printf("/n Firstclass");
	  }
	  else if (per>55)
	  {
	     printf("/n Second class");  	
	  }
	  else if (per>35);
	  {
	  	printf("/n third class")

	  }
}