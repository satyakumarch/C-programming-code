#include<stdio.h>
#include<stdlib.h>
int main()
 
 {
  int *p,n,i;
 printf("Enter the number of block we want to reserve:");
 scanf("%d",&n)
 p=(int*)calloc(n,sizeof(int));
 if(p==NULL)
 {
 	printf("memory not available");
 	exit(1);
 	}
 	else
 	{
 		printf("\nmemory allocated succesful");
 		printf("\nEnter interger value:");
 		for(i=0;i<n;i++)
 		{
 			scanf("%d",p+i);
		 }
		 printf("\nEnter values are:");
		 for(i=0;i<n;i++)
		 printf("\n%d",*(p+i));
	 }
 	return 0;
 }
