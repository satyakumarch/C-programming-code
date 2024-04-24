#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *n;
	int no,count=0,i;
	scanf("%d",&no);
	n=(char*)malloc(no*sizeof(char));
	fflush(stdin);
	gets(n);
	for(i=0;*(n+i)!='\0';i++)
	count++;n
	printf("%d",count);
	free(n);
	return 0;
	
}
