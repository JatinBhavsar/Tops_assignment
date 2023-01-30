#include<stdio.h>
main()
{
	int h,w,r,n;
	float ans;
	
	printf("/n/nSelect Operation To Perform : ");
	printf("/n1. Circle /n2. Triangle /n3. Rectangle/n/n");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("/n Enter a Radius : ");
			scanf("%d",&r);
			ans=3.14 *(r*r);
			printf("/n Circle = %f",ans);
			break;
		case 2:
			printf("/n Enter a height: ");
			sacnf("%d",&h);
			printf("/n Enter a Base: ");
			scanf("%d",&w);
			ans=0.5 *(h*w);
			printf("/n Triangle = %f",ans);
			break;
		case 3:
			printf("/n Enter a height: ");
			scanf("%d",&h);
			printf("/nEnter a Width: ");
			scanf("%d",&w);
			ans=h * w;
			printf("/n Rectangle = %f",ans);
			break;
		default:
			printf("/n INVALID INPUT!!");			
	}
}