#include<stdio.h>
#include<string.h>
main(){
	char a[100],b[100];
	gets(a);
	
	strcpy(b,a);
	strrev(b);
	
	int i=strcmp(a,b);
	if(i==0)
	printf("String is a palindrome");
	else
	printf("String is not a palindrome");
}
