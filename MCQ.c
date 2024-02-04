//#include<stdio.h>
//int main()
//{
//	int x,y,z;
//	x=9>8>7;
//	y=9>8>0;
//	z=9>8>1;
//	printf("%d %d %d",x,y,z);
//	return 0;
//}
//output
//0 1 0

//#include<stdio.h>
//int main()
//{
//	int i=-3;
//	int k=i%2;// output :-1
//	int l=i/2;// output:-1
//	printf("%d\n",k);
//	printf("%d\n",l);
//	
//}


//#include<stdio.h>
//int main()
//{
//	int a=2;
//	a+=a+=a+=3;
//	printf("%d",a);
//	return 0;  
//}
//output
//20

//#include<stdio.h>
//int main()
//{
//	int x;
//	for(i=-1;x<=10;x++)
//	{
//		if(x<5)
//		continue;
//		else
//		break;
//		printf("Techinctiming")
//	}
//	return 0;
//}
//output
//no run

//
//#include<stdio.h>
//int main()
//{
//	while(true)
//	{
//		printf("Rabbit");
//		break;
//		
//	}
//	return 0;
//}
//output
//compile time error
//while (true)or while(True)does not work .true is not a keyword

//#include<stdio.h>
//void main()
//{
//	int x=5;
//	if(x<1)
//	printf("hello");
//	if(x==5)
//	printf("hi");
//	else
//	printf("no");
//}
//output
//hi

//#include<stdio.h>
//int x;
//void main()
//{
//	if(x)
//	printf("hi");
//	else
//	printf("how are you?");
//	
//}
//output
//how are you?

//
//#include<stdio.h>
//int main()
//{
//	int x=5;
//	if(true);
//	printf("hello");
//}
//output
//it will throw an error

//#include<stdio.h>
//int main()
//{
//	float c=5.0;
//	printf("Temperature in Fahrenheit is %.2f",(9/5)*c+32);
//	return 0;
//}
//output
//Temperature in Fahrenheit is 37.00

//#include<stdio.h>
//int main()
//{
//	int x='A';
//	printf("%02X",x);
//	return 0;
//}
//output
//41

//#include<stdio.h>
//int main()
//{
//	int m=10;
//	int x=printf("%d",m);
//	printf("%d",x);
//	return 0;
//}
//output
//102

//#include<stdio.h>
//int main()
//{
//	int x=5.4%2;
//	printf("Value of x is %d",x);
//	
//}
//output
//compile time error

//#include<stdio.h>
//int main()
//{
//	int i=1,2,3;
//	printf("%d",i);
//	return 0;
//	
//}
//output
//compile time  error

//#include<stdio.h>
//int main()
//{
//	int i=5;
//	int l =i / -4;
//	int k=i % -4;
//	printf("%d%d\n",l , k);
//	return 0;
//}
//output
//-1,1
//
//#include<stdio.h>
//int main()
//{
//	short int i=95;
//	char c=97;
//	printf("%d %d %d\n",sizeof(i),sizeof(c),sizeof(c+i));
//	return 0;
//}
//output
//2,1,4

//#include<stdio.h>
//int main()
//{
//	int i=5,j=10,k=15;
//	printf("%d",sizeof(k /= i + j));
//	printf("%d", k);
//	}
//output
//415

//#include<stdio.h>
//int main()
//{
//	printf("%d",sizeof(printf("ComputerScience")));
//	return 0;
//}
//output
//4


//#include<stdio.h>
//int main()
//{
//	int a=1;
//	int b=1;
//	int c=a||--b;
//	int d=a--&&--b;
//	printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d);
//	return 0;
//}
//output
//a=0,b=0,c=1,d=0

//#include<stdio.h>
//int f1() {printf("computer"); return 1;}
//int f2() { printf("science");return 1;}
// int main()
// {
// 	int p=f1()+f2();
// 	return 0;
// }
// output
// computerscience

//#include<stdio.h>
// struct employee
// {
// 	int id;
// 	char rank[5];
// 	
// }
//  void main()
// {
// 	struct employee e;
// 	s.no=30;
// 	printf("howdy")
// }
//output
//compile time error

//#include<stdio.h>
//int main()
//{
//	int p=1,q=2,r=3,s=4,x;
//	e=r+s=q*p;
//	printf("%d,%d\n",x,s);
//		}
//output
//syntax error

//#include<stdio.h>
//int main()
//{
//	float q='a';
//	printf("%f",q);
//	return 0;
//}
//output
//97.000000

//#include<stdio.h>
//int main()
//{
//	int p=0;
//	p=5<2?4:3;
//	printf("%d",p);
//	return 0;
//}
//output
//3


//#include<stdio.h>
//int n=printf("greeks");
//{
//	int n=10;
//	printf("%d",n);
//	return 0;
//}
//output
//compile time error

//#include<stdio.h>
//int main()
//{
//	if(printf("geeks")!=5){
//		
//	}else
//	printf("geeksforgeeks");
//	return 0;
//}
//output
//geeksgeeksforgeeks

//#include<stdio.h>
//int main()
//{
//	if(printf("geeks"))
//    switch(printf("for"))
//     while(printf("geeks"))
//     return 0;
//}
//output
//geeksfor

//#include<stdio.h>
//int main()
//{
//    int a=0, b=0;
//    while(++a < 4)
//        printf("%d ", a);
//
//    while(b++ < 4)
//        printf("%d ", b);
//
//    return 0;
//}
//output
//1 2 3 1 2 3 4
//#include<stdio.h>
//int main()
//{
//    int a=25;
//    
//    while(a <= 27)
//    {
//        printf("%d ", a);
//        a++;
//    }
//
//    return 0;
//}
//output
//25 26 27

#include<stdio.h>
int main()
{
    int k;
    
    for(printf("FLOWER "); printf("YELLOW "); printf("FRUITS "))
    {
        break;
    }

    return 0;
}
//output
//FLOWER YELLOW

//#include<stdio.h>
//int main()
//{
//	printf("Hello Boss.");
//}
//output
//Hello Boss.

//#include<stdio.h>
//int main() {
//  int i=1;
//  i=2+2*i++;
//  printf("%d",i);
//  return 0;
//}
//ans 4

//#include<stdio.h>
//main()
//{
// int i;
// i = 2+3, 4>3, 1;
// printf( "%d" , i);
//}
//output
//5
//#include<stdio.h>
//main ()
//{
// int i=5;
// printf( "%d %d %d " , i,i<<2,i>>2);
//}
//output
//5 20 1

//#include<stdio.h>
//main ( )
//{
// int i=5;
// printf( "%d %d %d " , i,i<<2,i<<2);
//}
//output
//5 20 20

//#include<stdio.h>
//int main()
//{
//    int i=5;
//    printf( "%d %d %d " , i,i<2,i>2);
//    return 0;
//}
//output
//5 0 1

//#include<stdio.h>
//int main()
//{
//  int i=5;
//  printf( "%d %d %d " , i,i&&2,i||2);
//  return 0;
//}
//output
//5 1 1

//#include<stdio.h>
//int main()
//{
// int i=5;
// printf( "%d %d " , i,i|2);
// return 0;
//}
//output
//5 7

//#include<stdio.h>
//int main()
//{
//  int i=1;
//  i=i+i*i++;
//  printf("%d",i);
//  return 0;
//}
//output
//4

//#include<stdio.h>
//int main()
//{
//  int i=-2;
//  i=i+i*i++;
//  printf("%d",i);
//  return 0;
//}

//#include<stdio.h>
//int main()
//{
//   printf("%c", ~('C'*-1));
//   return 0;
//}
//output
//B
//#include<stdio.h>
//int main()
//{
//    char *p;
//    p="%d";
//    p++;
//    p++;
//    printf(p-2, 13);
//    return 0;
//}
//output
//13
//#include<stdio.h>
//int main()
//{
//     printf("%%%%");
//    return 0;
//}
//output
//%%


