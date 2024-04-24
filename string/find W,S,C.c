#include<stdio.h>
#include<string.h>
main(){
	char a[100]; int i,s=0,w=1;
	gets(a);
	int l=strlen(a);
	
	for(i=0;i<1;i++)
	{
		if(a[i]!=' ')
		continue;
		else
		{
			s++;
			w++;
		}
	}
	printf("There are %d characters,%d space and %d word",l,s,w);
}
