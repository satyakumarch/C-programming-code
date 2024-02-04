//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int *p,i,n;
//	printf("Enter the number of integer to be entered:");
//	scanf("%d",&n);
//	p=(int*)malloc(n*sizeof(int));//malloc() return void* so wee need to typecaste with teh specific
//	if(p==NULL)
//	{
//	printf("Memory not available\n");
//	exit(1);
//	}
//	else
//	{
//	printf("\nmemory alloation was successful");
//	printf("\nEnter the value :");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",p+i);//In place of p+i we can write &p[i](treating it as ID array)
//		
//	}
//	for(i=0;i<n;i++)
//	printf("\n%d",*(p+i));
//	}
//	return 0;
//}    
//output
//Enter the number of integer to be entered:3
//
//memory alloation was successful
//Enter the value :12 13 14
//
//12
//13
//14

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n;
	printf("Enter the numer of integer to be entered:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
        printf("memory is not available:");
        exit(1);
	}
	else
	{
		printf("\n memory allocation was succesful");
		printf("\nEnter integer values:");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
		for(i=0;i<n;i++)
		printf("%d\n:",*p+i);
	
	}
		return 0;
}
	
	

