//#include<stdio.h>
//int main(){
//	int a,b;
//	
//	printf("Enter the number a:");
//	scanf("%d",&a);
//	
//	printf("Enter the number b:
//	");
//	scanf("%d",&b);
//	
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	
//	printf("\nInterchange the value of a:%d",a);
//	printf("\nInterchange the value of b:%d",b);
//	return 0;
//}

//
//#include<stdio.h>
//int main(){
//	int a;
//	printf("\nEnter the age of the person:");
//	scanf("%d",&a);
//	(a>=18)?printf("\nyou are eligible for the voting"):printf("\nyou are not eligible for voting");
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int ca,att;
//	
//	printf("\nEnter the ca marks:");
//	scanf("%d",&ca);
//	
//	printf("\nEnter the att marks:");
//	scanf("%d",&att);
//	
//	(ca>=40)&&(att>=75)?printf("you are passed in exam"):printf("\nyou are fail in the exam");
//	return 0;
//	
//}


//#include<stdio.h>
//int main(){
//	int a,b;
//	printf("\nEnter the value of a:");
//	scanf("%d",&a);
//	
//	printf("\nEnter the value of b:");
//	scanf("%d",&b);
//	
//	(a<b)?printf("\n%d is the greatest number:",b,a):printf("\n%d is smallest number:");
//	return 0;
//	
//	
//}



//#include<stdio.h>
//int main(){
//	 int a;
//	 
//	 printf("Enter the value of a:");
//	 scanf("%d",&a);
//	 
//	 (a>0)?printf("\n Number is positive number:"):printf("\nNumber is negative number:");
//	 
//	return 0;
//	
//}

//-=--09876
//#include<stdio.h>
//#include<conio.h>
//int main(){
//	int a,b,c;
//	printf("Enter the value of a,b,c:");
//	scanf("%d %d %d",&a,&b,&c);
//	
//	if((a>b)&&(a>c))
//	printf("\n%d is greatst than %d and %d:",a,b,c);
//	
//	if((b>a)&&(b>c))
//	printf("\n%d is greatst than %d and %d:",b,a,c);
//	
//        if ((c>b)&&(c>a))
//	printf("\n%d is greatst than %d and %d:",c,b,a);
//	
//	
//	return 0;
//	
//}

#include<stdio.h>
int main()
{
	int p,b,n,t;
	printf("\n\n Price of pen  is 10 rupee:");
	printf("\n\n Enter the number of pen you want :");
	scanf("%d",&p);
	
	printf("\n\n price of book is 20 rupee:");
	printf("\n\n Enter the number of book you want :");
	scanf("%d",&b);
	
	printf("\n\n Price of notebook is 15 rupee");
	printf("\n\n Enter the number of notebook you want :");
	scanf("%d",&n);
	
	t=(10*p)+(200*b)+(50*n);
	
	printf("\n\n    1.pen               x %d   =   %d",p,10*p);
	printf("\n\n    2.book              x %d   =   %d",b,10*b);
	printf("\n\n    1.notebook          x %d   =   %d",n,10*n);
	printf("\n\n                       grand total:%d",t);
return 0;
}
