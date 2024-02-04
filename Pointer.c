//#include<stdio.h>
//void fun(int *ptr)
//{
//	*ptr=30;
//	
//}
//int main()
//{
//	int y=20;
//	fun(&y);
//	printf(" the output is:%d",y);
//	return 0;
//}
//output
//30

#include<stdio.h>
int main()
{
	int i;
	void *p=&i;
	printf("the output is:%d\n",int*p));
	return 0;
	
}