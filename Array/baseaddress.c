//#include<stdio.h>
//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int i;
//	printf("\nprint base address of the array:");
//	scanf("\n%u %u %u ",&a[0],&a[1],&a[2]);
//	printf("\n printing address of all array elements:");
//	for(i=0;i<5;i++)
//	{
//		printf("\n%u",&a[i]);
//	}
//	return 0;
//}
//output
//print base address of the array:1 2 3 4 5
//
// printing address of all array elements:
//6487552
//6487556
//6487560
//6487564
//6487568

#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int i;
	printf("\nEntre the number of the array;");
	scanf("%u %u %u ",&a[0],a,&a);
	printf("The elements in the array");
	for(i=0;i<=5;i++)
	{
		printf("\n%u",&a[i]);
	}
	return 0;
}
