#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	int i,j,len;
	printf("Enter 1st string:");
	gets(a);
	printf("Enter 2st string:");
	gets(b);
	len=strlen(a);
	for(i=len,j=0;b[j]!='\0';i++,j++)
	{
		a[i]=b[j];
		
	}
	a[i]='\0';
	printf("after concatenation:");
	puts(a);
	return 0;
	
}
