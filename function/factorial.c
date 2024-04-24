#include<stdio.h>
factorial(int);
main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	factorial(n);
	
}
factorial(int a)

{
	int i,f=1;
	for(i=1;i<=a;i++)
	f=f*i;
	printf("Factorial of %d is: %d",a,f);
}
