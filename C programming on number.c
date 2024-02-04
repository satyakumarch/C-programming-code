//Using the module operator And if else condition
//#include<stdio.h>
//int main()
//{
//	int data;
//	printf("\n Enter any number:=");
//	scanf("%d",&data);
//	if(data%2==0)
//	{
//	    printf("\n Number is even number.\n\n");
//	}
//	else
//	{
//		printf("\n Number is odd number.\n\n ");
//	}
//return 0;
//
//	}
//output
// Enter any number:=54647
//
// Number is odd number.


             //using ternary operator
//#include<stdio.h>
//int main()
//{
//	int number;
//	printf("\n Enter any number=:");
//	scanf("%d",&number);
//	(number%2)==0?printf("Even number\n"):printf("Odd number\n");
//	return 0;
//}
//output
//Enter any number=:12
//Even number

//using bitwise operator
//#include<stdio.h>
//int main()
//{
//	int data;
//	printf("Enter any number:=");
//	scanf("%d",&data);
//	
//	if(data&1)
//	{
//		printf("Number is odd\n");
//	}
//	else
//	{
//		printf("Number is Even \n");
//		
//	}
//	return 0;
//	output
//	Enter any number:=3
//Number is odd
	
//}

                 //using extra variable
//#include<stdio.h>
//int main()
//{
//	int data;
//	 
//	 int isEven=1;
//	 printf("Enter any number:=");
//	 scanf("%d",&data);
//	 for(int i=1;i<=data;i++)
//	 {
//	 	isEven=(1-isEven);
//	 }
//	 printf(isEven?"Even number":"odd number");
//	 return 0;
//}
//output
//Enter any number:=45
//odd number


              //program to print Even number from 1 to 100 using while loop
//#include<stdio.h>
//int main()
//{
//	int i=2,number;
//	printf("\n Enter the maximum limit value:");
//	scanf("%d",&number);
//	
//	printf("\n Even number between 1 to %d are:\n",number);
//	while(i<=number)
//	{
//		printf("%d\t",i);
//		i=i+2;
//	}
//	return 0;
//}
//output
// Enter the maximum limit value:12
//
// Even number between 1 to 12 are:
//2       4       6       8       10      12



                //using for loop
//#include<stdio.h>
//int main()
//{
//	int i,number;
//	printf("Please Enter the maximum  limit value:");
//	scanf("%d",&number);
//	
//	printf("Even number between 1 and %d are :\n",number);
//	for(i=1;i<=number;i++)
//	
//if(i%2==0)
//{
//	printf("%d\t",i);
//
//}
//	
//	
//}
//output
//Even number between 1 and 12 are :
//2       4       6       8       10      12

// c program to printf the odd number using while loop
//#include<stdio.h>
//int main()
//{
//int  i=1,number;
//printf("\n Enter the maximum limit value:");
//scanf("%d",&number);
//
//printf("\n Even number between 1 to %d are:\n",number);
//while(i<=number)
//{
//	printf("%d\t",i);
//	i=i+2;
//	}	
//return 0;	
//}
//output
// Even number between 1 to 20 are:
//1       3       5       7       9       11      13      15      17      19




                    
					// using for loop
//#include<stdio.h>
//int  main()
//{
//	int i,number;
//	printf("Please Enter the maximum limit value:");
//	scanf("%d",&number);
//	
//	printf("Even number between 1 and %d are :\n",number);
//	for(i=1;i<=number;i++)
//	{
//		if(i%2==0)
//		{
//	      printf("%d\t",i);
//	}
//}
//return 0;
//}	
//output
//Please Enter the maximum limit value:10
//Even number between 1 and 10 are :
//2       4       6       8       10

// print odd number in a given range
//#include<stdio.h>
//int main()
//{
//int i,min,max;
//printf("\n please Enter the min limit value:");
//scanf("%d",&min);
//
//printf("\n please Enter the max limit values:");
//scanf("%d",&max);
//if(min%2==0)
//{
//min++;
//}
//printf("\n Even number between %d and %d are :\n",min,max);
//for(i=min;i<=max;i=i+2)
//{
//	printf("%d\t",i);
//}
//
//return 0;
//	
//}	
//output
// please Enter the min limit value:1
//
// please Enter the max limit values:10
//
// Even number between 1 and 10 are :
//1       3       5       7       9			
					