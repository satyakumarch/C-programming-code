#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	
	strcat(a,b);
	printf("%s",a);
	
}
