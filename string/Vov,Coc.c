#include<stdio.h>
#include<string.h>
main()
{
	char a[100]; int i,c=0,v=0;
	gets(a);
	int l=strlen(a);
	
	for(i=0;i<l;i++)
	if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
	v++;
	else
	c++;
	printf("vowel are %d and constant are %d",v,c);
}
