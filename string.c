//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char *n;
//	int no,count=0,i;
//	scanf("%d",&no);
//	n=(char*)malloc(no*sizeof(char));
//	fflush(stdin);
//	gets(n);
//	for(i=0;*(n+i)!='\0';i++)
//	count++;
//	printf("%d",count);
//	free(n);
//	return 0;
//	
//}

#include<stdlib.h>
#include<string.h>
int main()
{
 char a[5],b[15];
 int i=0,l;
 printf("Enter first string \t:");
 gets(a);
 l=strlen(a);
 for(i=0;i<l;i++)
 {
 	b[i]=a[i];
 	
 }
 b[i]='\0';
 printf("\ncopied string is %s:\n",b);
 return 0;
}
