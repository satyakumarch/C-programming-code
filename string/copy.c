#include<stdio.h>
#include<string.h>
 main()
 {
 	char a[100],b[100];
 	gets(a);
 	gets(b);
 	
 	strcpy(a,b);
 	printf("%s",a);
 //	printf("%s",b);
 }
