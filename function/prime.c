//#include<stdio.h>
//prime(int);
//main()
//{
//	int n;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	prime(n);
//}
//prime(int a)
//{
//	int i,c=0;
//	for(i=1;i<=a;i++)
//	if(a%i==0);
//	c++;
//	
//	if(c==2)
//	printf("number is prime");
//	else
//	printf("number is not prime");
//}

//#include<stdio.h>
//int main()
//{
//	double radius,area=0.0;
//	double *parea=&area,*pradius=&radius;
//	Printf("\nEnter the radius of the circle:");
//	scanf("%lf",&pradius);
//	*parea=3.14*(*pradius)*(*pradius);
//	printf("\nThe radius of the circle is %.2lf=%2.lf",*parea,*pradius);
//	return 0;
//	
//}

#include<stdio.h>
int main()
{
	int i,n,fact=1;
	int *pn,*pfact;
	pn=&n;
	pfact=&fact;
	printf("\nEnter the number:");
	scanf("%d",pn);
	for(i=1;i<=*pn;i++)
	{
		*pfact=*pfact*i;
	}
	printf("\nThe factorial of the number is :%d",*pfact);
	return 0;
}
