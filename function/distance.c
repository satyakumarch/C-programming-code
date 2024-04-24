#include<stdio.h>
int meter(int km);
int feet(int km);
int miles(int km);

main()
{
	int x,n;
	printf("Kilometer to 1. meter  2.feet    3.miles\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			//("Enter the case no 1:");
			scanf("%d",&x);
			printf("%d km=",x);
			meter(x);
			break;
		case 2:
			scanf("%d",&x);
			printf("%d km=",x);
			feet(x);
			break;
		case 3:
			scanf("%d",&x);
			printf("%d km=",x);
			miles(x);
			break;
		default:
			printf("Enter the valid number:");
			break;
			
		
	}
}
meter(int a)
{
	a=a*1000;
	printf("%d meter",a);
	
}
feet(int a)
{
a=a*3280.84;
printf("%d feet",a);
}
miles(int a)
{
	a=a*0.621371;
	printf("%d miles",a);
}
