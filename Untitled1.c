//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	printf("Enter the number a :" );
//	scanf("%d",&a);
//	printf("Enter the number b:" );
//	scanf("%d",&b);
//	c=a+b;
//	printf("sum is %d \n",c);
//}



//#include<stdio.h>     
//int main()
//{
//	float p,t,r,i;
//	printf("Enter the number p:" );
//	scanf("%f",&p);
//	
//	printf("Enter the number t:" );
//	scanf("%f",&t);
//	
//	printf("Enter the number r:" );
//	scanf("%f/",&r);
//	
//	i=(p+t+r/100);
//	
//	printf("compound interest is %f:",i);
//	
//}



                        //program to find the area of the circle using radius:
//#include<stdio.h>
//int main()
//{
//	int r;
//	float a;
//	printf("Enter the radius:" );
//	scanf("%d",&r);
//	a=(3.1416*r*r);
//	printf("The is the area of the circle is: %f ",a);
//}


                        //To find the area of the rectangle
//#include<stdio.h>
//int main()
//{
//	int a,b,area;
//	printf("Enter the  length of a:");
//	scanf("%d",&a);
//	printf("Enter the length of b:");
//	scanf("%d",&b);
//	area=(a*b);
//	printf("The area of the rectangle is: %d ",area);
//}



                       // program to find the area of the triangle
//#include<stdio.h>
//int main()
//{
//	int l,b;
//	float area;
//	printf("Enter the length(l) and breadth(b) of the triangle:");
//	scanf("%d%d",&l,&b);
//	area=0.5*(l*b);
//	printf("The area of the triangle is: %f",area);	
//}



                      //program to fing the  gram from the kg;
//#include<stdio.h>
//int main()
//{
//	float k,gram;
//	printf("Enter the kilogram:");
//	scanf("%f",&k);
//	gram=1000*k;
//	printf("The gram of the enter kg is:%f",gram);
//}


// program to find the simple interest of the given number;
//#include<stdio.h>
//int main()
//{
//	int p,t,r;
//	float SI;
//	printf("Enter the principal(p) time(t) rate(r):");
//	scanf("%d%d%d",&p,&t,&r);
//	SI=(p*t*r)/100;
//	printf("The simple interest is: %f",SI);
//}
 
                // program to find the swap of two number
//#include<stdio.h>
//int main()
//{
//	int a,b;
//	printf("\n\n Enter the value of a:");
//	scanf("%d",&a);
//	
//	printf("Enter the value of b:");
//	scanf("%d",&b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	
//	printf("\n\n Interchange value of a is :%d",a);
//	printf("\n\n Interchange value of b is :%d",b);
//}


//#include<stdio.h>
//int main()
//{
//	int a,b;
//	printf("Enter a and b:");
//	scanf("%d%d",&a,&b);
//	a=a+b;
//	b=a-b;
//	a=b;
//	printf("a is %d",a);
//	printf("")
//}

//Program to find the equivalent resistance and capacitance of the  capacitor and resistor
//#include<stdio.h>
//int main()
//{
//	int R1,R2;
//	float Req;
//	printf("Enter the resistance R1:");
//	scanf("%d",&R1);
//	printf("Enter the resistance R2:");
//	scanf("%d",&R2);
//	Req=(R1*R2)/(R1+R2);
//	printf("The equivalent resistance is:%f",Req);
//	printf("The equivalent capacitance of the capacitor is :%f\n",Req);
//} 


//#include<stdio.h>
//int main()
//{
//	char a;
//	printf("Enter the string:");
//	scanf("%lc",&a);
//	a='ram';
//	printf("The string is :%lc",a);
//}

//#include<stdio.h>
//int main()
//{
//	char name[100];
//	printf("Ente the name:");
////	scanf("%s %s",fname,lname);
////	printf("%s %s",fname,lname);
//    gets(name);
//    printf("%s",name);
//} 

//#include<stdio.h>
//int main()
//{
//	int age;
//	printf("Entre the age of the person:");
//	scanf("%d",&age);
//	if(age>=18)
//	printf("he/she is eligible for vote:");
//	else
//	printf("he/she is not eligible for vote:");
//	}

//To find the greatest number between three number:
//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	printf("Enter the first number a:");
//	scanf("%d",&a);
//	
//	printf("Enter the second number b:");
//	scanf("%d",&b);
//	
//	printf("Enter the third number c");
//	scanf("%d",&c);
//	if(a>b&&a<c);
//	printf(" %dise greatest number:");
//	if(b>c&&b>a);
//	printf(" b is the greatest number:");
//    if(c>a&&c>b);
//	printf("c is the greatest number:");
//	}

//
//#include<stdio.h>
//int main()
//{
//	printf(" int=%d\n",sizeof(int));
//	printf("char=%d\n",sizeof (char));
//	printf("short int=%u\n",sizeof(short int));
//	printf("unsigned int=%d\n",sizeof(unsigned int));
//	printf("float=%d\n",sizeof(float));
//	printf("double=%d\n",sizeof(double));
//	printf("long double=%d\n",sizeof(long double));
//	return 0;
//	
//	}


//#include<stdio.h>
//int main()
//{	
//	int a,b,c;
//	printf("Enter the value of a and b:");
//	scanf("%d%d",&a,&b);
//	c=a>b?a:b;
//	printf("%d id greater ",c);
//	//a>b?printf("%d is greater",a):printf("%d is greater:",b);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a,b=5,6;
//	int c;
//	if(a&&b){
//		printf("Line 1-Conditional is true\n");
//		
//	}
//	if(a||b){
//		printf("Line 2 -conditional is true\n);
//	}
//	/*lets change the value of a and b*/
//	a=0;
//	b=10;
//	if (a&&b){
//		prinf("line 3 conditional  is true\n");
//		
//	}
//}

//
//#include<stdio.h>
//int main()
//{
//	int a=5,b=7;
//	printf("%d\n",a&b);
//	printf("%d\n",a|b);
//	printf("%d\n",a^b);
//	printf("%d\n",~a);
//	printf("%d\n",25<<3);
//	printf("%d\n",5>>2);
//	return 0;
//}
//output
//5
//7
//2
//-6
//200
//1

//#include<stdio.h>
//int main()
//{
//	int feet,inches,i;
//	printf("Enter the inches=");
//	scanf("%d",&inches);
//	feet=inches/12;
//	i=inches%12;
//	printf("output %d\n""%d\n",i);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("Enter the valur of a=");
//	scanf("%d",&a);
//	printf("The value of a=%d",a);
//	return 0;
//	
//}
//output
//Enter the valur of a=54
//The value of a=54




//#include<stdio.h>
//int main()
//{
//	float a;
//	printf("Enter the value of a=");
//	scanf("%f",&a);
//	printf("The value of a=%f",a);
//	return 0;
//}
//output
//Enter the value of a=40
//The value of a=40.000000



//#include<stdio.h>
//int main()
//{
//	int a,b,sum;
//	printf("Enter the value of a=");
//	scanf("%d",&a);
//	printf("Enter the valure of b=");
//	scanf("%d",&b);
//	sum=a+b;
//	printf("The sum of %d+%d=%d",a,b,sum);
//	return 0;
//}
//output
//Enter the value of a=20
//Enter the valure of b=12
//The sum of 20+12=32


//#include<stdio.h>
//int main()
//{
//	int a,b,div;
//	printf("Enter the value =");
//	scanf("%d%d",&a,&b);
//	div=a/b;
//	printf("%d",div);
//	return 0;
//}
//output
//Enter the value =32
//2
//16


//#include<stdio.h>
//int main()
//{
//	float b,h,oat;
//	printf("Enter the value of base and height =");
//	scanf("%f%f",&b,&h);
//	oat=(float)1/(float)2*b*h;
//	printf("Area or the triangle=%f",oat);
//	return 0;
//}
//output
//Enter the value of base and height =6
//4
//Area or the triangle=12.000000

//#include<stdio.h>
//int main()
//{
//	signed char chr;
//	chr=128;
//	printf("%d\n",chr);
//	return 0;
//}
//output
//-128

//#include<stdio.h>
//int main()
//{
//	int i=3;
//	int j=i/-2;
//	int k=i%-2;
//	printf("%d%d\n",j,k);
//	return 0;
//}
//output
//-11

//#include<stdio.h>
//int main()
//{
//	int x=5*9/3+9;
//	printf("%d",x);
//	return 0;
//}
//output
//24

//#include<stdio.h>
//int main()
//{
//	div x=5.3 %2;
//	printf("Value of x is %d",x);
//	return 0;
//}
//output
//compile time error

//#include<stdio.h>
//int main()
//{
//	int a=10;
//	double b=5.6;
//	int c;
//	c=a+b;
//	printf("%d",c);
//	return 0;
//}
//output
//24

//#include<stdio.h>
//int main()
//{
//	int x=3,y,z;
//	y=x++;
//	z=++x;
//	printf("\n%d,%d,%d",x,y,z);
//	return 0;
//}
//output
//5,3,5

//#include<stdio.h>
//int main()
//{
//	int a=1,b=1,c;
//	c=a++  +b;
//	printf("%d,%d,%d",a,b,c);
//	return 0;
//}
//output
//2,1,2

//#include<stdio.h>
//int main()
//{
//	int d,a=1,b=2;
//	d=a++ + ++b;
//	printf("%d%d%d",d,a,b);
//	return 0;
//}
//output
//423

//
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int x=i++;
//	int y=++i;
//	printf("%d %d\n",x,y);
//	return 0;
//}
//output
//0 2


//#include<stdio.h>
//int main()
//{
//	int x=4,y,z;
//	y=--x;
//	z=x--;
//	printf("%d%d%d",x,y,z);
//	return 0;
//}
//output
//233

//
//#include<stdio.h>
//int main()
//{
//	int a=1,b=2,c;
//	x=a>b;
//	printf("\n%d",c);
//	return 0;
//}
//output
//Non of these


//#include<stdio.h>
//int main()
//{
//	int a=1,b=2;
//	printf("\n%d",a!=b);
//	return 0;
//}
//output
//1



//#include<stdio.h>
//int main()
//{
//	int a=10,b=5,c=5;
//	int d;
//	d=b+c==a;
//	printf("%d",d);
//	return 0;
//}
//output
//1

//#include<stdio.h>
//int main()
//{
//	int a=10,b=0,c;
//	c=a&&b;
//	printf("%d",c);
//	return 0;
//}
//output
//0


//
//#include<stdio.h>
//int main()
//{
//	int a=10 ,b=0,c=2,d;
//	d=a&&b||c-2;
//	printf("%d",d);
//}
//output
//0


//#include<stdio.h>
//int main()
//{
//	int x=1,y=0,z=5;
//	int a=x&&y||z++;
//	printf("%d",z);
//	return 0;
//}
//output
//6


//#include<stdio.h>
//int main()
//{
//	int a=2,b=4;
//	printf("a=%d,b=%d\n",a,b);
//	printf("a&b=%d\n",a&b);
//	printf("a|b=%d\n",a|b);
//	printf("a^b=%d\n",a^b);
//	printf("~a=%d\n",a=~a);
//	printf("b<<1=%d\n",b<<1);
//	printf("b>>1=%d\n",b>>1);
//	return 0;
//}
//output
//a=2,b=4
//a&b=0
//a|b=6
//a^b=6
//~a=-3
//b<<1=8
//b>>1=2

//#include<stdio.h>
//int main()
//{
//	int a=10,b=5;
//	printf("%d\n",a&b);
//	printf("%d",a|b);
//	return 0;
//}
//output
//0
//15

//#include<stdio.h>
//int main()
//{
//	int a=8,b=3;
//	printf("%d",a^b);
//	return 0;
//}
//output
//11

//#include<stdio.h>
//int main()
//{
//	int a=10;
//	printf("%d",~a);
//	return 0;
//}
//output
//-11



//#include<stdio.h>
//int main()
//{
//	printf("Create a new line.\n");
//	printf("Print a bouble quotes(\")with a string.\n");
//	printf("Print a single quotes(\') within a string.\n");
//	printf("Print a Blackslash \\ withhin a string.\n");
//	printf("Using \t tab within a string.\n");
//}
//output
//Create a new line.
//Print a bouble quotes(")with a string.
//Print a single quotes(') within a string.
//Print a Blackslash \ withhin a string.
//Using    tab within a string.


//#include<stdio.h>
//int main()
//{
//	double b=5%3&4+5*6;
//	printf("%lf",b);
//	return 0;
//}
//output
//2.000000


//#include<stdio.h>
//int main()
//{
//	double b=3&&5&4%3;
//	printf("%lf",b);
//	return 0;
//}
//output
//1.000000
	
	
	
//#include<stdio.h>
//int main()
//{
//double b=5&3&&4||5|6;
//printf("%lf",b);
//return 0;	
//}	
//output
//1.000000	

//#include<stdio.h>
//int main()
//{
//	int b=5+7*4-9*(3,2);
//	printf("%d",b);
//}
//output
//15

//#include<stdio.h>
//int main()
//{
//	int b=4*6+3*4<3?4:3;
//	printf("%d\n",b);
//}
//output
//3

//#include<stdio.h>
//int main()
//{
//	int a=-1,b=4,c=1,d;
//	d=++a&&++b||++c;
//	printf("%d,%d,%d\n",a,b,c,d);
//	return 0;
//}
//output
//0,4,2







