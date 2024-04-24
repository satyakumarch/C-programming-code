#include<stdio.h>
sum(int,int);
add(int*,int*);

main()
{
	int a,b;
	printf("Enter the number:\n");
	scanf("%d%d",&a,&b);
	
	sum(a,b);
	add(&a,&b);
	
}
sum(int x,int y)//call by value
{
	x=x+y;
	printf("sum is %d\n",x);
	
}
add(int *x,int *y)//call by reference

{
x=*x+*y;
printf("sum is %d\n",x);
}

