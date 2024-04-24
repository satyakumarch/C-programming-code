#include<stdio.h>
int main()
{
	int num,n,bitstatus;
	printf("Enter any number:");
	scanf("%d",&num);
	
	printf("Enter the nth bit to check (0-30):");
	scanf("%d",&n);
	
	bitstatus=(num>>n)&1;
	
	printf("The %d bit is set to %d",n,bitstatus);
	return 0;
}
output
Enter any number:12
Enter the nth bit to check (0-30):2
The 2 bit is set to 1
