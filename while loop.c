//#include<stdio.h>
//int main()
//{
//	int i;
//	while(i<5)
//	{
//		printf("%d\n",i);
//		i++;
//		
//		}
//		return 0;
//}
//
//#include<stdio.h>
//int main()
//{
// int n=10;
// while (n>0)
// {
//  printf(“%d\n”, n);
//  n=n-1;
// }
//return 0;
//}
//#include <stdio.h>
//    int main()
//{
//        int i = 0;
//        while (i < 3)
//            i++;
//printf("In while loop\n");
//}
// #include<stdio.h>
//int main()
//{
// int n;
// for (n=10; n>0; n=n-1){
//  printf(“%d ”, n);
// }
//return 0;
//}
//Program to find sum of first n numbers
//#include<stdio.h>
//int main()
//{
//     int n,i,sum=0;
//     printf("enter the value");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//     sum=sum+i;
//     }
//     printf("the sum=%d",sum);
//     return 0;
//}
//output
//enter the value5
//the sum=15

//Program to find sum of digits of a number
//#include<stdio.h>
//int main()
//{
//     int no,sum=0,n;
//     printf("Enter the no:");
//     scanf("%d",&no);
//     while(no!=0)
//     {
//                n=no%10;
//                sum=sum+n;
//                no=no/10;
//                
//            }
//     printf("the sum of digits=%d",sum);
//     }
//output
//Enter the no:135
//the sum of digits=9
//#include<stdio.h>
//int main()
//{
//int i;
//for(i=1;i<10;i++);
//printf("%d",i);
//return 0;
//}
//output
//10
//#include<stdio.h>
//int main()
//{
// int i,j,k ;
// printf("enter a number:");
// scanf("%d", &k);
// printf("the tables from 1 to %d: \n",k);
// for(i=1; i<k; i++){
//   for(j=1; j<=10; j++){
//     printf("%d ",i*j);
//    } //end inner for loop
//   printf("\n");
// } //end outer for loop
//return 0;
//} //end main
//output
//enter a number:4
//the tables from 1 to 4:
//1 2 3 4 5 6 7 8 9 10
//2 4 6 8 10 12 14 16 18 20
//3 6 9 12 15 18 21 24 27 30

//#include<stdio.h>
//int main()
//{
// int n=10;
// do{
//  printf("%d",n);
//  n=n-1;
// }while (n>0);
//}
//output
//10987654321

//    #include <stdio.h>
//    int main()
//    {
//        do
//            printf("In while loop ");
//        while (0);
//            printf("After loop\n");
//        return 0;
//    }
//output
//In while loop After loop


//    #include <stdio.h>
//    int main()
//    {
//        int i = 0;
//        do {
//            i++;
//            printf("In while loop\n");
//        } while (i < 3);
//       return 0;
//    }
//output
//In while loop
//In while loop
//In while loop
//    #include <stdio.h>
//    int main()
//    {
//        int x = 5;
//        if (x < 1)
//            printf("hello");
//        if (x == 5)
//            printf("hi");
//        else
//            printf("no");
//        return 0;
//    }
//output
//hi

//    #include <stdio.h>
//    int main()
//    {
//        int x = 0;
//        if (x == 0)
//            printf("hi");
//        else
//            printf("how are u");
//            printf("hello");
//        return 0;
//    }
//output
//hihello

//#include <stdio.h>
//    int main()
//    {
//        int x = 5;
//        if (x < 1);
//            printf("Hello");
// 
//    }
//output
//Hello
//#include<stdio.h>
//int main()
//{
//float x=2.3;
//if(x==2.3)
//{
//printf("Hi");
//}
//else
//{
//printf("Hello");
//}
//return 0;
//}
//output
//hello

//#include<stdio.h>
//int main()
//{
//int x=-1;
//if(x)
//{
//printf("Hi");
//}
//else
//{
//printf("Hello");
//}
//return 0;
//}
//
//    #include <stdio.h>
//    int main()
//    {
//    	int a=7;
//    int	b=5;
//    	printf("%d\n",a&b);//5
//    	printf("%d\n",a&&b);//1
//    	printf("%d\n",a|b);//7
//    	printf("%d\n",a||b);//1

//        float f = 0.1;
//        if (f == 0.1)
//            printf("True");
//        else
//            printf("False");
//        return 0;
  //  }
//output
//False


//#include <stdio.h>
//    int main()
//    {
//        int x = 1;
//        if (x > 0)
//            printf("inside if\n");
//        else if (x > 0)
//            printf("inside elseif\n");
//    }
//output
//inside if
//
//    #include <stdio.h>
//    int main()
//    {
//        int x = 0;
//        if (x++)
//            printf("true\n");
//        else if (x == 1)
//            printf("false\n");
//    }
//output
//false

//    #include <stdio.h>
//    int main()
//    {
//        int x = 0;
//        if (x == 0)
//            printf("true, ");
//        else if (x = 10)
//            printf("false, ");
//        printf("%d\n", x);
//        return 0;
//    }
//output
//true, 0
//
//#include <stdio.h>
//    int main()
//    {
//        int x = 0;
//        if (x == 1)
//            if (x >= 0)
//                printf("true\n");
//            else
//                printf("false\n");
//    }

//    #include <stdio.h>
//    int main()
//    {
          //int x = 0;
//        if (x == 1)
//            if (x == 0)
//                printf("inside if\n");
//            else
//                printf("inside else if\n");
//        else
//            printf("inside else\n");
//    return 0;
//  }
//output
//inside else

// #include <stdio.h>
//  int main()
//    {
//        double b = 5 % 3 & 4 + 5 * 6;
//        printf("%lf", b);
//        return 0;
//    }

//#include <stdio.h>
//    int main()
//    {
//        //double b = 3 && 5 & 4 % 3;
//        double b = 12 & 3 ;
//        printf("%lf", b);
//        return 0;
//    }
//output
//1.000000
//    #include <stdio.h>
//    int main()
//    {
//        double b = 5 & 3 && 4 || 5 | 6;
//        printf("%lf", b);
//        return 0;
//    }

//    #include <stdio.h>
//    int main()
//    {
//        int b = 5 + 7 * 4 - 9 * (3, 2);
//        printf("%d", b);
//    }


// #include <stdio.h>
//    int main()
//    {
//        int b = 4 * 6 + 3 * 4 < 3 ? 4 : 3;
//        printf("%d\n", b);
//    }
//    output
//    3

//    #include <stdio.h>
//    int main()
//    {
//        int a = -1, b = 4, c = 1, d;
//        d = ++a && ++b || ++c;
//        printf("%d, %d, %d, %d\n", a, b, c, d);
//        return 0;
//    }
//    output
//    0, 4, 2, 1
//#include<stdio.h>
//int main()
//
//{
//	float f = 0.1;
//        if (f == 0.1)
//            printf("True");
//        else
//            printf("False");
//int i=0, j=1, k=2, m;
//m = i++ || j++ || k++;
//printf("%d %d %d %d", m, i, j, k);
//        return 0;


//} 
//#include<stdio.h>
//int main()
//{
//	int n,i,sum=0;
//	printf("Enner the number=:");
//	scanf("%d",&n);
//	while(n!=0)
//	{
//		i=n%10
//		sum=sum+i;
//		
//		
//	}
//	
//	}
//}

//
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main()    
//{    
//int n,r,sum=0,temp;    
////printf("enter the number=");    
//scanf("%d",&n);    
//temp=n;    
//while(n>0)    
//{    
//r=n%10;    
//sum=(sum*10)+r;    
//n=n/10;    
//}    
//if(temp==sum)    
//printf("NO");    
//else    
//printf("YES");   
//return 0;  
//} 




                 // while loop
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	while(i<=5)
//	{
//		printf("%d\n",i);
//		i++;
//	}
//}
//output
//0
//1
//2
//3
//4
//5
                  //do while loop
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	do{
//		printf("%d\n",i);
//		i++;
//		
//	}
//	while(i<5);
//	return 0;
//}
//0
//1
//2
//3
//4

//#include<stdio.h>
//int main()
//{
//	int i,j;
//	//outer loop
//	for (i=1;i<=2; i++)
//{
//	printf(" outer: %d\n", i);
//	
//	// inner loop
//	for (j=1;j<=3;j++)
//	{
//		printf(" Inner: %d\n", j);
//	}
//}
//}
//output
// outer: 1
// Inner: 1
// Inner: 2
// Inner: 3
// outer: 2
// Inner: 1
// Inner: 2
// Inner: 3









