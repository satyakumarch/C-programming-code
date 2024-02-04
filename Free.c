#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,n,i;    
	printf("Enter the number to be entered");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory not avaiable ");
		exit(1);
	}
	else
	{
	printf("\nmemory allocation was succesful");
	printf("\nEnter integer values:");
	for(i=0;i<n;i++)
	{
	scanf("%d",p+i)
	}		 
	for(i=0;i<n;i++)
	printf("\n%d",*(p+i));
	}
	free(p);
	printf("\nmemory deallocated");
	return 0;
}
	

