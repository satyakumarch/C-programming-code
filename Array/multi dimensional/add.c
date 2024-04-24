//#include<stdio.h>
//int main()
//{
//	int a[2][3]={1,2,3,4,5};
//	int i=0,j=0;
//	for(i=0;i<2;i++)
//	for(j=0;j<3;j++)
//	printf("%d",a[i][j]);
//	return 0;
//	
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

//#include<stdio.h>
//int main()
//{
//	int a[3][3];
//	int i,j;
//	for(i=0;i<3;i++)
//	{
//	for(j=0;j<3;j++)
//	{
//		printf("\nEnter the value of a[%d][%d]:",i,j);
//		scanf("%d",&a[i][j]);
//		
//	}
//		}
//	printf("\nEnter the 2D matrix elements:");
//	{
//		for(i=0;i<3;i++)
//	
//		for(j=0;j<3;j++)
//			
//	
//	
//	printf("%d\t",a[i][j]);
//	{
//		printf("\n");
//	}
//}
//	return 0;
//	}
//	
//	

#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value of a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("elements of 2D matrix are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

	
	
	

