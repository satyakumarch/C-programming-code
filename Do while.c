// #include<stdio.h>
// int main()
// {
// 	int i;
// do
// 	{
// 		printf("%d\n",i);
// 		i++;
		
// 		}while(i<5);
// 		return 0;
// }
// #include<stdio.h>
// int main()
// {
// int a,b,sum,mul,sub;
// int choice;
// printf("Press 1 for add\n");
// printf("Press 2 for sub\n");
// printf("Press 3 for mul\n");
// printf("enter your choice=");
// scanf("%d",&choice);
// printf("enter your inputs=");
// scanf("%d%d",&a,&b);
// if(choice==1)
// {
// sum=a+b;
// printf("sum=%d",sum);
// }
// else if(choice==2)
// {
// sub=a-b;
// printf("sub=%d",sub);
// }
// else if(choice==3)
// {
// mul=a*b;
// printf("mul=%d",mul);
// }
// else
// printf("invalid choice");
// return 0;
// }




// #include<stdio.h>
// int main()
// {
// int a,b,res;
// int choice;
// printf("Press 1 for add\n");
// printf("Press 2 for sub\n");
// printf("Press 3 for mul\n");
// printf("enter your choice=");
// scanf("%d",&choice);
// if(choice==1)
// {
// printf("enter your inputs=");
// scanf("%d%d",&a,&b);
// res=a+b;
// printf("sum=%d",res);
// }
// else if(choice==2)
// {
// printf("enter your inputs=");
// scanf("%d%d",&a,&b);
// res=a-b;
// printf("sub=%d",res);
// }
// else if(choice==3)
// {
// printf("enter your inputs=");
// scanf("%d%d",&a,&b);
// res=a*b;
// printf("mul=%d",res);
// }
// else
// printf("invalid choice");
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int a,b,res;
// int choice;
// printf("Press 1 for add\n");
// printf("Press 2 for sub\n");
// printf("Press 3 for mul\n");
// printf("enter your choice=");
// scanf("%d",&choice);
// switch(choice)
// {
// case 1:
// printf("enter your inputs=");
// scanf("%d%d",&a,&b);
// res=a+b;
// printf("sum=%d",res);
// break;
// default:
// printf("invalid choice");
// break;
// case 2:
// printf("enter your inputs=");
// scanf("%d%d",&a,&b);
// res=a-b;
// printf("sub=%d",res);
// break;
// case 3:
// printf("enter your inputs=");
// scanf("%d%d",&a,&b);
// res=a*b;
// printf("mul=%d",res);
// break;

// }
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int a,b,res;
// char choice;
// printf("Press + for add\n");
// printf("Press - for sub\n");
// printf("Press * for mul\n");
// printf("enter your choice=");
// scanf("%c",&choice);
// switch(choice)
// {
// case '+':
// printf("enter your inputs=");
// scanf("%d%d",&a,&b);
// res=a+b;
// printf("sum=%d",res);
// break;
// default:
// printf("invalid choice");
// break;
// case '-':
// printf("enter your inputs=");
// scanf("%d%d",&a,&b);
// res=a-b;
// printf("sub=%d",res);
// break;
// case '*':
// printf("enter your inputs=");
// scanf("%d%d",&a,&b);
// res=a*b;
// printf("mul=%d",res);
// break;

// }
// return 0;
// }



// #include<stdio.h>
// int main()
// {
// int i;
// for(i=1;i<5;i++)
// {
// printf("%d\n",i);
// }

// return 0;
// }



// #include<stdio.h>
// int main()
// {
// int i=1;
// while(i<5)
// {
// printf("%d\n",i);
// i++;
// }

// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int i=1;
// do
// {
// printf("%d\n",i);
// i++;
// }while(i<5);

// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int i=5;
// do
// {
// printf("%d\n",i);
// i--;
// }while(i>0);

// return 0;
// }



// #include<stdio.h>
// int main()
// {
// int i,n;
// printf("enter the value=");
// scanf("%d",&n);
// for(i=1;i<=n;i++)
// {
// printf("%d\n",i);
// }

// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int a,b;
// printf("enter the values of a and b=");
// scanf("%d%d",&a,&b);
// if(a>b)
// printf("%d is greater",a);
// else
// printf("%d is greater",b);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int a,b,c;
// printf("enter the values of a and b=");
// scanf("%d%d%d",&a,&b,&c);
// if(a>b && a>c)
// printf("%d is greater",a);
// else if(b>a && b>c)
// printf("%d is greater",b);
// else
// printf("%d is greater",c);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int a,b,c;
// printf("enter the values of a and b=");
// scanf("%d%d%d",&a,&b,&c);
// if(a>b && a>c)
// printf("%d is greater",a);
// if(b>a && b>c)
// printf("%d is greater",b);
// if(c>a && c>b)
// printf("%d is greater",c);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int a,b,c;
// printf("enter the values of a and b=");
// scanf("%d%d%d",&a,&b,&c);
// if(a>b)
// {
// if(a>c)
// printf("a is greatest");
// else
// printf("c is greatest");
// }
// else
// {
// if(b>c)
// printf("b is greatest");
// else
// printf("c is greatest");
// }
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int a;
// printf("enter value=");
// scanf("%d",&a);
// printf("%d %c",a,a);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// char a;
// printf("enter value=");
// scanf("%c",&a);
// printf("%c %d",a,a);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// char ch;
// printf("enter any character=");
// scanf("%c",&ch);
// if(ch=='a'||ch=='A'||ch=='e'||ch=='E')//complete it
// printf("entered character is vowel");
// else
// printf("entered character is not a vowel");
// return 0;
// }

// #include<stdio.h>
// int main()
// { int a;
// printf("int=%d\n",sizeof(a));
// printf("int=%d bytes\n",sizeof(int));
// printf("char=%d\n",sizeof(char));
// printf("short int=%u\n",sizeof(short int));
// printf("unsigned int=%d\n",sizeof(unsigned int));
// printf("float=%d\n",sizeof(float));
// printf("double=%d\n",sizeof(double));
// printf("long double=%d\n",sizeof(long double));
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int a,b;
// a=2,3;
// b=(2,3);
// printf("a=%d\tb=%d",a,b);

// return 0;
// }



// #include<stdio.h>
// int main()
// {
// int a,b,c;
// printf("enter the values of a and b");
// scanf("%d%d",&a,&b);
// c=a>b?a:b;
// printf("%d is greater",c);
// // a>b?printf("%d is greater",a):printf("%d is greater",b);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int a=5,b=7;
// printf("%d\n",a&b);
// printf("%d\n",a|b);
// printf("%d\n",a^b);
// printf("%d\n",~a);
// printf("%d\n",25<<3);
// printf("%d\n",5>>2);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int feet,inches,i;
// printf("enter the value in inches=");
// scanf("%d",&inches);
// feet=inches/12;
// i=inches%12;
// printf("output=%d\"%d\'",feet,i);
// return 0;
// }

           ///while loop
#include<stdio.h>
int main()
{
	int n=1;
	while (n<=5)
	{
		printf("%d",n);
		n=n+2;
	}
}