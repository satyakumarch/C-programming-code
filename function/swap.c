#include<stdio.h>
swap(int ,int);
main()
{
	int n,o;
	printf("Enter the number:");
	scanf("%d%d",&n,&o);
	swap(n,o);
}
swap(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapped number are %d and %d :",a,b);
}
