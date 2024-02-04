//#include<stdio.h>
//int main()
//{
//	char a[100];
//	scanf("%[^\n]%*c",&a);
//	printf("Hello, World!\n%s",a);
//	return 0;
//	
//}
//output
//Welcomr to c program.
//Hello, World!
//Welcomr to c program.




//#include<stdio.h>
//int main()
//{
//	char ch;
//	char s[10];
//	char sen[100];
//	scanf("%c\n%s\n%[^\n]s",&ch,&s,&sen);
//	printf("%c\n%s\n%s\n",ch,s,sen);
//	return 0;
//}
//output
//A
//Language
//C Programminh
//A
//Language
//C Programminh

//#include<stdio.h>
//int main()
//{
//	int a,b,c,d;
//	scanf("%d\n%d\n%d\n%d\n",&a,&b,&c,&d);
//	if(a>b&a>c&a>d)
//	{
//		printf("%d",a);
//	}
//	if(b>c&b>d&b>a)
//	{
//		printf("%d",b);
//	}
//	if(c>d&c>a&c>b)
//	{
//		printf("%d",c);
//	}
//	else
//	printf("%d",d);
//	return 0;
//}
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

//int main()
// {
//    int a, b, c, d;
//    scanf("%d\n%d\n%d\n%d\n", &a, &b, &c, &d);
//    int x =max(a, b);
//    printf("%d",x);
//    
//    return 0;
//}

void sort_by_area(traingle*tr,int n)
{
	int *p=malloc(n*sizeof int));
	for (int i=0;i<n;i++)
{

float a=(tr[i].a+tr[i].b+tr[i].c)/2.0;
p[i]=(a*(a-tr[i].a)*(a-tr[i].b)*(a-tr[i].c));
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<n-i-1;j++)
	{
		if(p[j]>p[j+1])
		{
			int temp=p[j];
			p[j]=p[j+1]
			p[j+1]=temp;
			temp=tr[j.a;
			tr[j].a]
		}
	}
}









