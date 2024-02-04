//#include<stdio.h>
//int main()
//{
//	printf("hello world");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int s;
//	int a=10;
//	int b=12;
//	s=a+b;
//	printf('s');
//	}
//
//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	printf("Enter the value of a and b:");
//	scanf("%d%d",&a,&b);
//	printf("value before swapping \n");
//	printf("a=%d\tb=%d",a,b);
//	c=b;
//	b=a;
//	a=c;

//	c=a;
//	a=b;
//	b=c;
//	printf("\n\nvalue after swapping \n");
//	printf("a=%d\tb=%d",a,b);
//	
//	return 0;
//}

//without using third variabl to find the swap number
//a=a+b
//b=a-b
//a=a-b



//#include<stdio.h>
// int main()
//{
//	int l,b;
//	float area;
//	printf("Enter the length and breadth of the triangle:");
//	scanf("%d%d",&l,&b);
	//area=0.5*(l*b);
	//area=(float)1/2*l*b;
    //area=1/(float)2*l*b; 
    //area=float(1/2)*l*b;it is a wrong statement;
    // area=1/2*l*b; 0.000
//	area=float(1)/float(2)*l*b;
//	
//	printf("the area of the triangle is %f:",area);
//	return 0;
//}
#include <stdio.h>
void update();
int main()
{
update();
update();
return 0;
}
void update()
{
    auto int a=1;
    static int b=1;
    a++;
    b++;
    printf("%d,%d\n",a,b);
}

































	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
