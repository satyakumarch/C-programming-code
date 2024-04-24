#include<stdio.h>
table(int);
int  main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
table (n);
}
table(int a)
{
	int i,t=1;
	for(i=1;i<=10;i++)
	{
	t=a*i;
	printf("%d x %d is: %d\n",a,i,t);
	}
}

// Enter the number:45
// 45 x 1 is: 45
// 45 x 2 is: 90
// 45 x 3 is: 135
// 45 x 4 is: 180
// 45 x 5 is: 225
// 45 x 6 is: 270
// 45 x 7 is: 315
// 45 x 8 is: 360
// 45 x 9 is: 405
// 45 x 10 is: 450
