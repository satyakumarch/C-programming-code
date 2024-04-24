#include<stdio.h>
#include<string.h>
main(){
	char a[100];int i,c=0;
	gets(a);
	int l=strlen(a);
	
	for(i=0;i<l;i++)
	if (a[i]=='e')
	{
		a[i]='x';
		c++;
		
	}
	printf("%d times 'e' occur in string and new string is %s",c,a);
}
