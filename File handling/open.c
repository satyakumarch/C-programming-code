#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("radhe.txt","r");
	if(ptr==NULL)
	{
		printf("File is not present:");
	}
	else
	

	printf("file opened in read mode:\n");
	
	return 0;
}

