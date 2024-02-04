//#include<stdio.h>
//int main()
//{
//	int a,b,sum,mul,sub;
//	int choice;
//	printf(" Press 1 for addition\n");
//	printf(" Press 2 for subtraction\n");
//	printf(" Press 3 for multiplication\n");
//	printf("Enter your choice=");
//	scanf("%d",&choice);
//	printf("Enter your inputs=");
//	scanf("$d$d",&a,&b);
//	 
//	
//	
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i;
//	for(i=1;i<5;i++)
//	{
//		printf("%d\n",i);
//	
//	}
//	printf("%\n\n%d",i);
//		return 0;
//}
//output
//1
//2
//3
//4
//
//5

//
//#include<stdio.h>
//int main()
//{
//	int v;
//	printf("Enter the number:");
//	scanf("%d",&v);
//	if(v<10)
//	printf(" number is less than 10");
//	return 0;
//}
//output
//Enter the number:6
// number is less than 10

//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("Enter the number:");
//	scanf("%d",&a);
//	if(a<10)
//	printf("number is less than 10");
//	else
//	printf("number is greater than 10");
//	return 0;
//}
//output
//Enter the number:6
//number is less than 10
//Enter the number:12
//number is greater than 10

//#include<stdio.h>
//int main()
//{
//	int x=0;
//	if(x==0)
//	printf("hi");
//	else
//	printf("how are you?");
//	printf("hello");
//	return 0;
//}
//output
//hihello

//#include<stdio.h>
//int main()
//{
//	int x=5;
//	if(x<1);
//	printf("hello");
//	
//}
//output
//hello

//#include<stdio.h>
//int main()
//{
//	float x=2.3;
//	if(x==2.3);
//	
//		printf("hi");
//		else
//	printf("hello");
//		return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int x=-1;
//	if(x)
//	{
//		printf("hi");
//	}
//	else
//	{
//		printf("hello");
//		
//	}
//	return 0;
//}
//output
//hi

//#include<stdio.h>
//int main()
//{
//	float f=0.1;
//	if(f==0.1)
//	printf("True");
//	else
//	printf("False");
//	return 0;
//}
//output
//False
// Program to check the number is less than 10
//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("Enter the  number:");
//	scanf("%d",&a);
//	if(a<10)
//	{
//		printf("number is less than 10");
//		
//	}
//	else if (a<100)
//	{
//		printf("number is less than 100.");
//	}
//	return 0;
//	
//}
//output
//Enter the  number:9
//number is less than 10
//Enter the  number:44
//number is less than 100.



//program to print grades of students marks
//#include<stdio.h>
//int main()
//{
//	float marks;
//	printf("Enter your marks:");
//	scanf("%f",&marks);
//	if(marks>90)
//	{
//	printf("A grade");	
//	}
//	else if (marks >80)
//	{
//		printf("grade B");
//	}
//	else if(marks>70)
//	{
//	printf("grade C");
//		
//	}
//	else if (marks>60){
//		printf("grade D");
//	}
//	return 0;
//}
//output
//Enter your marks:87
//grade B

//#include<stdio.h>
//int main()
//{
//	int  x=1;
//	if(x>0)
//	printf("inside if\n");
//	else if(x>0)
//	printf("inside elseif\n");
//	
//	return 0;
//	
//}
//output
//inside if

//#include<stdio.h>
//int main()
//{
//	int x=0;
//	if(x++)
//	printf("true\n");
//	else if(x==1)
//	printf("false\n");
//	
//}
//output
//false

//#include<stdio.h>
//int main()
//{
//	int x=0;
//	if(x==0)
//	printf("true\n");
//	else if(x==10)
//	printf("false,");
//	printf("%d\n",x);
//	return 0;
//}
//output
//true,o


//#include<stdio.h>
//int main()
//{
//	int i=10;
//	if(i=10)
//	{
//		if(i<15)
//		printf("i is smaller than 15\n");
//		
//		if(i<12)
//		printf("i is smaller than 12 too\n");
//		else
//		printf("i is greater than 15");
//	}
//	return 0;
//}
//output
//i is smaller than 15
//i is smaller than 12 too



//#include<stdio.h>
//int main()
//{
//	int x=0;
//	if(x==1)
//	if(x>=0)
//	printf("true\n");
//	else
//	printf("False\n");
//	
//}
//output
//Nothing will be printed

//#include<stdio.h>
//int main()
//{
//	int x=0;
//	if(x==1)
//	if(x==0)
//	printf("inside if \n ");
//	else
//	printf("inside else if\n");
//	else
//	printf("inside else \n");
//	return 0;
//	
//}
//output
//inside else


//#include<stdio.h>
//int main()
//{
//	int pt;
//	printf("Enter the number of nodes:");
//	scanf("%d",&pt);
//	switch(pt)
//	{
//		case 0:
//			printf("\n No Geometry");
//			break;
//		case 1:
//			printf("\nA point");
//			break;
//		case 2:
//			printf("\nA line");
//			break;
//		case 3:
//			printf("\nA Triangle");
//			break;
//		case 4:
//			printf("\nA Rectangle");
//			break;
//		case 5:
//			printf("\nA pentagon");
//			break;
//		case 6:
//			printf("\nA Invalid input");
//			break;
//	
//	}
//	return 0;
//}
//output
//Enter the number of nodes:5
//
//A pentagon


//#include<stdio.h>
//int main()
//{
//	char ch;
//	printf("Enter the value betweeen 1 to 2:");
//	scanf("%lf",&ch);
//	switch(ch)
//	{
//		case 1:
//			printf("1");
//			break;
//		case 2:
//			printf("2");
//			break;
//	}
//	
//		return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int ch;
//	printf("Enter a value between  1 to 2:");
//	scanf("%d",&ch);
//	switch(ch)
//	{
//		case 1:
//			printf("1");
//			default:
//			printf("2");
//			
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch; 
//	printf("enter a value between 1 to 2:");
//	scanf("%d",&ch);
//	switch(ch)
//	{
//		case 1:
//			printf("1");
//			printf("hi");
//			break;
//		default:
//			printf("2\n");
//			
//	}
//}
//output
//1 hi
//
//#include<stdio.h>
//int main ()
//{
//	int x=97;
//	switch(x)
//	{
//		case'a':
//			printf("yes");
//			break;
//		case 97:
//			printf("no");
//			break;
//	}
//}
//output
//Duplicate case value error

//#include<stdio.h>
//int main()
//{
//	int a=1;
//	switch(a)
//	{
//		case a:
//			printf("case A");
//			default:
//			printf("Default");
//			
//	}
//	return 0;
//}
//output
//case A  default

//#include<stdio.h>
//int main()
//{
//	int x,y=10;
//	x=y*null;
//	printf("%d",x);
//	
//}
//output
//error

//#include<stdio.h>
//void main()
//{
//	int key;
//	printf("Press 1 to turn left.");
//	printf("Press 2 to turn right.");
//	printf("Press 3 to to increase speed.");
//	printf("Press 4 for break:");
//	scanf("%d",&key);
//	switch (key)
//	{
//		case 1:
//			printf("Turn left\n");
//		 break;
//		case 2:
//			printf("Turn right\n");
//		 break;
//		case 3:
//			printf("Increase the speed\n");
//		 break;
//		case 4:
//			printf("Break\n");
//		 break;
//			default:
//				printf("Invalid input");
//	}
//}
//output
//Press 1 to turn left.Press 2 to turn right.Press 3 to to increase speed.Press 4 for break:
//2
//Turn right

//#include<stdio.h>
// int main(void)
// {
// 	int a,c;
// 	float f;
// 	char day[10];
// 	printf("Enter integers: ");
// 	scanf("%d",&a);
// 	
// 	printf("Enter floating point numbe:");
// 	scanf("%f",&f);
// 	
// 	
// 	printf("Enter a string:");
//    scanf("%8s",day);
// }
// output
// Enter integers: 12334
//32334
//Enter floating point numbe:23424.423
//Enter a string:satya kumar chaudhary


//#include<stdio.h>
//int main()
//{
//	int n1=20,n2=20,n3=20;
//	
//	if(n1>=n2&& n1>=n3)
//	printf("%d is the largest number:\n",n1);
//	
//	if(n2>=n1 && n2>=n3)
//	printf("%d is the largest number:\n",n2);
//	
//	if(n3>=n1 && n3>=n2)
//	printf("%d is the largest number:\n",n3);
//	
//}
//output
//20 is the largest number:
//20 is the largest number:
//20 is the largest number:


//#include<stdio.h>
//int main()
//{
//	int n1=20,n2=20,n3=20;
//	
//	if(n1>=n2&& n1>=n3)
//	printf("%d is the largest number:",n1);
//	
//else	if(n2>=n1 && n2>=n3)
//	printf("%d is the largest number:",n2);
//		else
//	printf("%d is the largest number:",n3);
//	
//}
//output
//20 is the largest number:



//#include <assert.h>
//#include <limits.h>
//#include <math.h>
//#include <stdbool.h>
//#include <stddef.h>
//#include <stdint.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//int t;
//scanf("%d",&t);
//// Complete the code.
//if(t<10)
//{
//if (t==9) printf("nine");
//else if (t==8) printf("eight");
//else if (t==7) printf("seven");
//else if (t==6) printf("six");
//else if (t==5) printf("five");
//else if (t==4) printf("four");
//else if (t==3) printf("three");
//else if (t==2) printf("two");
//else if (t==1) printf("one");
//}
//else
//printf("Greater than 9");
//return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int t;
//	printf("Enter the number:");
//	scanf("%d",&t);
//	if(t<=10)
//{
//	if (t==9) printf("Nine");
//	else if(t==8)printf("Eight");
//	else if(t==7)printf("Seven");
//	else if(t==6) printf("Six");
//	else if(t==5) printf("Five");
//	else if(t==4) printf("Four");
//	else if(t==3) printf("three");
//	else if(t==2)printf("Two");
//	else if(t==1)printf("One");
//} 
//else
//printf("Greater than 9");
//return 0;
//
//}
//output
//Enter the number:1
//One

//factorial number
//#include<stdio.h>
//int main()
//{
//	int n,r;
//	printf("Enter the value=");
//	scanf("%d",&n);
//	r=fact(n);
//	printf("factorial=%d",r);
//	return 0;
//	}
//	int fact(int n)
//	{
//		if(n==1||n==0)
//		return 1;
//		else
//		return n*fact(n-1);
//		
//	}


//#include<stdio.h>
//int main()
//{
//	int n,r;
//	printf("Enter the values:");
//	scanf("%d",&n);
//	r=fact(n);
//	printf("Factorial =%d",r);
//	return 0;
//	}
//	int fact(int n);
//{
//		if(n==1||n==0)
//		return 0;
//		else
//		return n*fact(n-1);
//		
//}

//Call by Reference
#include<stdio.h>
void swap(int*,int*);//Function Declaration
int main()
{
int a,b;
printf("enter the values=");
scanf("%d%d",&a,&b);//a=20 b=30
printf("values before swapping\n");
printf("a=%d\tb=%d\n",a,b);
swap(&a,&b);
printf("values after swapping\n");
printf("a=%d\tb=%d\n",a,b);
return 0;
}
void swap(int *x,int *y)//Function Definition
{
int z;
z=*x;
*x=*y;
*y=z;
printf("values in function\n");
printf("x=%d\ty=%d\n",*x,*y);
}



 
















