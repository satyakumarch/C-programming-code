#include<stdio.h>
#include<string.h>
main(){
	char a[100],b[100];
	gets(a);
	gets(b);
	int l=strlen(a);
	int l1=strlen(b);
	
	char c[l+l1];
	int n=0,n1=0,i;
	
	for(i=0;i<(l+l1);i++)
	if(n<l)
	{
		c[i]=a[n];
		n++;
	}
	else
	{
		c[i]=b[n1];
		n1++;
	}
	printf("%s",c);
}
