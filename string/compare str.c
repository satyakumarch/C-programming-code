#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	
	int i=strcmp(a,b);
	if(i==0)
	printf("String are same.");
	else
	printf("string are not same.");
}
