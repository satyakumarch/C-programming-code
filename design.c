//#include<stdio.h>
//#include <graphics.h>
//
//int main()
//{
//   int gd = DETECT, gm;
//   int x = 320, y = 240, radius;
//       
//   initgraph(&gd, &gm, "C:\\TC\\BGI");
//       
//   for ( radius = 25; radius <= 125 ; radius = radius + 20)
//      circle(x, y, radius);
//       
//   getch();
//   closegraph();
//   return 0;
//}
//
//#include <graphics.h>
//int main()
//{
//   int gd = DETECT, gm;
//   int x = 320, y = 240, radius;
//       
//   initgraph(&gd, &gm, "C:\\TC\\BGI");
//       
//   for ( radius = 25; radius <= 125 ; radius = radius + 20)
//      circle(x, y, radius);
//       
//   getch();
//   closegraph();
//   return 0;
//}
//
//2. C graphics program moving car

//#include<stdio.h>
//int main()
// { 
//char ch='A';
//ch=getchar(); 
//putchar(ch);
// return 0; 
// }

//# include <stdio.h>
//void fun(int *ptr)
//{
//    *ptr = 30;
//}
// int main()
//{
//  int y = 20;
//  fun(&y);
//  printf("%d", y);
//  return 0;
//}
//#include<stdio.h>
//struct employee
//{
//	char name[20];
//	int roll_no;
//	float salary;
//};
//int main()
//{
//	struct employee e1={"Smith"};
//	printf("%f",e1.salary);
//	return 0;
//}
//#include<stdio.h>
//struct book
//{
//	char b_name[50];
//	int no_of_pages;
//	float price;
//};
//int main()
//{
//	struct book b1={"Programming"};
//	printf("%d",b1.no_of_pages);
//	return 0;
//}

//#include<stdio.h>
//struct student
//{
//	char name[20];
//	int roll_no;
//	float fees
//}v1={"Goerge",23,4500.45},v2={"Tom",45,3400.56};
//int main()
//{
//printf("%d",v2.roll_no);
//return 0;
//}
//#include<stdio.h>
//struct student
//{
//	char name[20];
//	int roll_no;
//	float fees
//}v1={"Goerge",4500.45};
//int main()
//{
//printf("%d",v1.roll_no);
//return 0;
//}
//#include<stdio.h>
//struct student
//{
//	int a=10;
//}v1;
//int main()
//{
//printf("%d",v1.a);
//return 0;
//}

//#include<stdio.h>
//int main()
//{
//int a[][3]={1,2,3,4,5,6};
//printf("%d",a[0][2]);
//return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a[3][2]={{1,2},{3,4},{5,6}};
//    printf("%d",a[1][1]*a[2][1]);
//    return 0;
//} 
//A. 24
//B. 12
//C. 8
//D. 20
//#include <stdio.h>
//    int main()
//    {
//        int a[2][3] = {1, 2, 3, 4, 5};
//        int i = 0, j = 0;
//        for (i = 0; i < 2; i++)
//        for (j = 0; j < 3; j++)
//        printf("%d ", a[i][j]);
//        return 0;
//    }

//    #include <stdio.h>
//    int main()
//    {
//        int *ptr, a = 10;
//        ptr = &a;
//        *ptr += 1;
//        printf("%d,%d", *ptr, a);
//    }
//A. 10,10
//B. 10,11
//C. 11,10
//D. 11,11
//#include<stdio.h>
//    int main()
//    {
//        int x=10;
//        int *p1=&x,*p2;
//        *p1=x+3;
//        p2=p1;
//        *p2=*p1+2;
//        printf("%d",x);
//        return 0;
//    }
//#include <stdio.h>
//    int main()
//    {
//        char *p = NULL;
//        char *q = 0;
//        if (p)
//            printf(" p ");
//        else
//            printf("nullp");
//        if (q)
//            printf("q\n");
//        else
//            printf(" nullq\n");
//    }

//#include <stdio.h>
//    int main()
//    {
//        int i = 10;
//        void *p = &i;
//        printf("%d\n", (int)*p);
//        return 0;
//    }
//A. Compile t
//
//  #include <stdio.h>
//    int main()
//    {
//        int i = 10;
//        void *p = &i;
//        printf("%f\n", *(float*)p);
//        return 0;
//    }
//#include <stdio.h>
//    int x = 0;
//    void main()
//    {
//        int *const ptr = &x;
//        printf("%p\n", ptr);
//        ptr++;
//        printf("%p\n ", ptr);
//    }
//#include <stdio.h>
// void foo(int *p)
//    {
//        int j = 2;
//        p = &j;
//        printf("%d ", *p);
//    }
//    int main()
//    {
//        int i = 97, *p = &i;
//        foo(&i);
//        printf("%d ", *p);
//    }

//#include <stdio.h>
//    void m(int *p, int *q)
//    {
//        p=q;
//        *p=8;
//        *q=7;
//    }
//    int main()
//    {
//        int a = 6, b = 5;
//        m(&a, &b);
//        printf("%d %d\n", a, b);
//    }
//#include<stdio.h>
//int main()
//{
//int a[5]={1,2,3,4,5};
//int b[5];
//int i;
//for(i=0;i<5;i++)
//{
//b[i]=++a[i];
//}
//printf("%d",b[0]+b[3]);
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//int a[5] = {5, 1, 15, 20, 25};
//int i=2;
//printf("%d",a[++i]);
//return 0;
//}
//int main() 
//{ 
// float marks[3] = {90.5, 92.5, 96.5}; 
// int a=0;  
// while(a<3) 
// { 
// printf("%.2f ", marks[a]); 
// a++; 
// } 
//return 0;
//}

//#include<stdio.h>
//int main()
//{
//float x=12.6784;
//printf("%.3f",x);
//return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//double x=3.456;
//printf("%lf",floor(x));
//return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//double x=10.0,y=7.0;
//printf("%lf",fmod(x,y));
//return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//int x;
//x=printf("ABC");
//printf(" %d",x);
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//extern int a;
//printf("%d",++a);
//return 0;
//}
//int a;
//#include<stdio.h>
//void update();
//int main()
//{
//update();
//update();
//return 0;
//}
//void update()
//{
//    auto int a=1;
//    static int b=1;
//    a++;
//    b++;
//    printf("%d,%d\n",a,b);
//}
//
//#include <stdio.h> 
//int main()
// {
// struct bus 
//{
// int seats; 
//}
//F1, *F2;
// F1.seats=20;
// F2=&F1;
// F2->seats=15; 
//printf("%d ",F1.seats); 
//return 0;
// }
// int main()
// { 
//struct book {
// int pages;
// char name[10];
// }
//a;
// a.pages=10;
// strcpy(a.name,"Cbasics"); 
//printf("%s=%d", a.name,a.pages); 
//return 0; 
//} 
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//    { 
//    char str[3]="SUNDAY"; 
//    printf("%s",str);
//     }


//#include<stdio.h> 
//#include<string.h>
//int main()
// {
// char country[]="BRAZIL"; 
//char *ptr; ptr=country; 
//while(*ptr != '\0')
// {
// printf("%c", *ptr);
// ptr++; 
//}
// return 0; 
//} 
//# include <stdio.h>
//int main()
// {
// int a[3] = {10,12,14};
// a[1]=20; 
//int i=0; 
//while(i<3)
// {
// printf("%d ", a[i]); i++; }
// }

//#include <stdio.h>
//    void main()
//    {
//        int a[2][3] = {1, 2, 3, 4, 5};
//        int i = 0, j = 0;
//        for (i = 0; i < 2; i++)
//        {
//            for (j = 0; j < 3; j++)
//        printf("%d", a[i][j]);
//        }
//    }
//
//#include<stdio.h>
// int main() 
//{ 
//int i = 4,j = 7;
//while(++i < --j) 
//printf("Loop") ;
// return 0; 
//}
////a) Loop   b) Loop Loop  c) Loop Loop Loop   d)infinite loop


//#include<stdio.h>
// int main()
//{ 
//int i = 4; 
//while(i == 4--) 
//printf("Loop "); 
//return 0;
// }
//int main()
// { 
//char ch='A';
// ch=getchar(); 
//putchar(ch);
// return 0; }
#include<stdio.h>
int main()
{
int i;
int arr[5]={1};
for(i=0;i<5;i++)
printf("%d",arr[i]);
	return 0;
}
