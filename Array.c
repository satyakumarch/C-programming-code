//#include<stdio.h>
//int main()
//{
//	int a[7],i,n;
//	printf("Enter the no of the elements:");
//	scanf("%d",&n);
//	printf("\nEnter the elements:");
//	for(i=0;i<=n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\nThe elements are \n");
//	for(i=0;i<n;i++)
//	{
//		printf("%d\t%u\n",a[i],&a[i]);
//		
//	}
//	{
//			printf("%d\t%u\n",a+1,&a+1);
//	}
//	return 0;
//}
//output
//Enter the no of the elements:5
//
//Enter the elements:1
//2
//3
//4
//5
//6
//
//The elements are
//1       6684160
//2       6684164
//3       6684168
//4       6684172
//5       6684176

//#include<stdio.h>
//int main()
//{
//	int a[5],i,n,sum=0;
//	printf("Enter the no of the elements:");
//	scanf("%d",&n);
//	printf("\nEnter the elements:");
//	for(i=0;i<=n;i++)
//	{
//		scanf("%d",&a[i]);
//		sum=sum+a[i];
//	}
//	printf("\nThe elements are \n");
//	for(i=0;i<n;i++)
//	
//	{
//	//scanf("%d",&a[i]);
//	sum=sum+a[i];
//	}
// printf("sum=%d",sum);
//return 0;
//}

		
	
	
	
	
	
	

//#include <stdio.h>
//
//int main() 
//{
// int t;
// scanf("%d",&t);
// while(t--)
//}
//   int X,Y,Z;
//   //Accept 3 integer input.
//   scanf("%d%d%d",&X,&Y,&Z);  
//   if(X>Y&&X>Z)
//  {
//  	printf("Setter");
//  }
//   else if(Y>X&&Y>Z)
//  {
//       printf("Editorialist");
//  }
//   else
//   printf("Tester");
//
//}
// return 0;
//   {

//#include<stdio.h>
//int main()
//{
//int a[5],i,n,sum=0;
//printf("enter the no. of elements");
//scanf("%d",&n);
//printf("\nenter the elements");
//for(i=0;i<n;i++)
//{
//scanf("%d",&a[i]);
//sum=sum+a[i];
//}
//printf("sum=%d",sum);
//return 0;
//}
//
//

//#include<stdio.h>
//int main()
//{
//int a[5],i;
//for(i=0;i<5;i++)
//{
//scanf("%d",&a[i]);
//}
//for(i=0;i<5;i++)
//{
//printf("%d\t",a[i]);
//}
//return 0;
//}
//output
//1
//2
//3
//4
//5
//1       2       3       4       5

//#include<stdio.h>
//int main()
//{
//int a[5],i;
//for(i=0;i<5;i++)
//{
//scanf("%d",&a[i]);
//}
//for(i=0;i<5;i++)
//{
//printf("%d\t%u\n",a[i],&a[i]);
//}
//return 0;
//}
//output
//1 2 3 4 5 6
//1       6684160
//2       6684164
//3       6684168
//4       6684172
//5       6684176

//#include<stdio.h>
//int main()
//{
//int a[5],i;//uninitialized array
//for(i=0;i<5;i++)
//{
//printf("%d\t%u\n",a[i],&a[i]);
//}
//return 0;
//}
//output
//1       6684160
//0       6684164
//52      6684168
//0       6684172
//7476144 6684176


//#include<stdio.h>
//int main()
//{
//int a[5]={10,20,30,40,50},i;
//for(i=0;i<5;i++)
//{
//printf("%d\t%u\n",a[i],&a[i]);
//}
//return 0;
//}
//output
//10      6684160
//20      6684164
//30      6684168
//40      6684172
//50      6684176


//#include<stdio.h>
//int main()
//{
//int a[5]={10,20,30},i;
//for(i=0;i<5;i++)
//{
//printf("%d\t%u\n",a[i],&a[i]);
//}
//return 0;
//}
//output
//10      6684160
//20      6684164
//30      6684168
//0       6684172
//0       6684176


//#include<stdio.h>
//int main()
//{
//int a[5],i,n;
//printf("Enter the no. of elements:");
//scanf("%d",&n);
//printf("\nEnter the elements:");
//for(i=0;i<n;i++)
//{
//scanf("%d",&a[i]);
//}
//printf("\nThe Elements are:\n");
//for(i=0;i<n;i++)
//{
//printf("%d\t%u\n",a[i],&a[i]);
//}
//return 0;
//}
//output
//Enter the no. of elements:5
//
//Enter the elements:1 2 3 4 5
//
//The Elements are:
//1       6684160
//2       6684164
//3       6684168
//4       6684172
//5       6684176
//
//
//
//#include<stdio.h>
//int main()
//{
//int a[5],i,n;
//printf("Enter the no. of elements:");
//scanf("%d",&n);
//printf("\nEnter the elements:");
//for(i=0;i<n;i++)
//{
//scanf("%d",&a[i]);
//}
//printf("\nThe Elements are:\n");
//for(i=0;i<n;i++)
//{
//printf("%d\t%u\n",a[i],&a[i]);
//}
//printf("\n%u\t%u",a,&a);
//return 0;
//}
//output
//Enter the no. of elements:5
//
//Enter the elements:1 2 3 4 5
//
//The Elements are:
//1       6684160
//2       6684164
//3       6684168
//4       6684172
//5       6684176


//#include<stdio.h>
//int main()
//{
//	int i,n,j,max,loc=-1;
//	printf("Enter the no. of elements:");
//	scanf("%d",&n);
//	int a[n],key;
//	printf("\nEnter the elements:");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("Enter the elements you want to search:");
//	scanf("%d",&key);
//	for(i=0;i<n;i++)
//	{
//		if(a[i]==key)
//	{
//		loc=i+1;
//	break;
//	}
//	
//}
//if(loc!=-1)
//printf("Element found at %d location:",loc);
//else
//printf("Element not found");
//return 0;
//
//}
//output
//Enter the no. of elements:5
//
//Enter the elements:22 33 44 55 66
//Enter the elements you want to search:44
//Element found at 3 location:


//#include<stdio.h>
// int main()
// {
// 	int a[5],i,n,sum=0;
// 	printf("Enter the no of elements:");
// 	scanf("%d",&n);
// 	printf("\nEnter the elements:");
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%d",&a[i]);
// 		if(a[i]%3==0)
// 		{
// 			sum=sum+a[i];
//		 }
//	 }
//	 printf("sum=%d",sum);
//	 return 0;
// }

//#include <stdio.h>
//
//int main(void)
//{
//	printf ("%s%s", printf ("Hello"), printf ("Friends"));
//	return 0;
//}

//#include <stdio.h>
//#include<conio.h>
//
//int main()
//{
//	int a,b,sum;
//	a=10;
//	b=20;
//	
//	sum=-(-a-b);
//	
//	printf("Sum is:%d",sum);
//	
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//
//int i,n;
//printf("enter the no. of elements:");
//scanf("%d",&n);
//float a[n],sum=0.0,avg;
//printf("\nenter the elements:");
//for(i=0;i<n;i++)
//{
//scanf("%f",&a[i]);
//sum=sum+a[i];
//}
//avg=sum/n;
//printf("average=%.2f",avg);
//return 0;
//}
//output
//enter the no. of elements:4
//
//enter the elements:10 11 12 13
//average=11.50


//#include<stdio.h>
//int main()
//{
//
//int i,n;
//printf("enter the no. of elements:");
//scanf("%d",&n);
//float a[n],sum=0.0,avg;
//printf("\nenter the elements:");
//for(i=0;i<n;i++)
//{
//scanf("%f",&a[i]);
//sum=sum+a[i];
//}
//avg=sum/n;
//printf("average=%.2f",avg);
//return 0;
//}
//output
//enter the no. of elements:4
//
//enter the elements:10 11 12 13
//average=11.50
//
//
//

//#include<stdio.h>
//int main()
//{
//
//int i,n;
//printf("enter the no. of elements:");
//scanf("%d",&n);
//float a[n],b[n];
//printf("\nenter the elements:");
//for(i=0;i<n;i++)
//{
//scanf("%f",&a[i]);
//}
//for(i=0;i<n;i++)
//{
//b[i]=a[i];
//printf("%f\t",b[i]);
//}
//return 0;
//}
//output
//enter the no. of elements:4
//
//enter the elements:11 12 13 14
//11.000000       12.000000       13.000000       14.000000
//


//#include<stdio.h>
//int main()
//{
//
//int i,n,j;
//printf("enter the no. of elements:");
//scanf("%d",&n);
//float a[n],b[n];
//printf("\nenter the elements:");
//for(i=0;i<n;i++)
//{
//scanf("%f",&a[i]);
//}
//for(i=n-1,j=0;i>=0;i--,j++)
//{
//b[j]=a[i];
//printf("%f\t",b[j]);
//}
//return 0;
//}
//enter the no. of elements:4
//
//enter the elements:11 12 13 14
//14.000000       13.000000       12.000000       11.000000
//
//
//
//#include<stdio.h>
//int main()
//{
//int i,n,j,max;
//printf("enter the no. of elements:");
//scanf("%d",&n);
//int a[n];
//printf("\nenter the elements:");
//for(i=0;i<n;i++)
//{
//scanf("%d",&a[i]);
//}
//max=a[0];
//for(i=0;i<n;i++)
//{
//if(max<a[i])
//{
//max=a[i];
//}
//}
//printf("maximum element=%d",max);
//return 0;
//}
//output
//enter the no. of elements:5
//
//enter the elements:12 21 45 32 33
//maximum element=45

                   //2D Array
//#include<stdio.h>
//int main()
//{
//int a[3][3],i,j;
//for(i=0;i<3; i++)
//{//for loop for rows
//for (j=0;j<3;j++)
//{//for loop for columns
//printf("Enter the value of a[%d][%d]:",i,j);
//scanf("%d",&a[i][j]);
//
//	
//}//end for column
//}//end for rows
//printf("Elements of 2D matrix are \n:");
//for(i=0;i<3;i++)
//{
//	for(j=0;j<3;j++)
//	{
//	printf("%d %u\t",a[i][j],&a[i][j]);	
//	}//end for
//	printf("\n");
//}//end for
//return 0;
//}//end main
//output
//Enter the value of a[0][0]:23
//Enter the value of a[0][1]:45
//Enter the value of a[0][2]:67
//Enter the value of a[1][0]:89
//Enter the value of a[1][1]:89
//Enter the value of a[1][2]:23
//Enter the value of a[2][0]:12
//Enter the value of a[2][1]:34
//Enter the value of a[2][2]:12
//Elements of 2D matrix are
//:23 6684144     45 6684148      67 6684152
//89 6684156      89 6684160      23 6684164
//12 6684168      34 6684172      12 6684176



//#include<stdio.h>
//int main()
//{
//int a[3][3],i,j,sum=0;
//for(i=0;i<3; i++)
//{//for loop for rows
//for (j=0;j<3;j++)
//{//for loop for columns
//printf("Enter the value of a[%d][%d]:",i,j);
//scanf("%d",&a[i][j]);
//sum=sum+a[i][j];
//}
//}
//printf("sum=%d:",sum);
//
//return 0;
//}//end main
//output
//Enter the value of a[0][0]:1
//Enter the value of a[0][1]:2
//Enter the value of a[0][2]:3
//Enter the value of a[1][0]:4
//Enter the value of a[1][1]:5
//Enter the value of a[1][2]:6
//Enter the value of a[2][0]:7
//Enter the value of a[2][1]:8
//Enter the value of a[2][2]:9
//sum=45:


//#include<stdio.h>
//int main()
//{
//int a[3][3],i,j,sum=0;
//for(i=0;i<3; i++)
//{//for loop for rows
//for (j=0;j<3;j++)
//{//for loop for columns
//printf("Enter the value of a[%d][%d]:",i,j);
//scanf("%d",&a[i][j]);
//if(i==j)
//sum=sum+a[i][j];
//
//}
//}
//printf("sum=%d:",sum);
//
//return 0;
//}//end main
//output
//Enter the value of a[0][0]:1
//Enter the value of a[0][1]:2
//Enter the value of a[0][2]:3
//Enter the value of a[1][0]:4
//Enter the value of a[1][1]:5
//Enter the value of a[1][2]:6
//Enter the value of a[2][0]:7
//Enter the value of a[2][1]:8
//Enter the value of a[2][2]:9
//sum=15:

//
//#include<stdio.h>
//int main()
//{
//	int a[2][2],b[2][2],c[2][2],i,j;
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			scanf("%d",&b[i][j]);
//		}}
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		
//	{
//	
//	sum[i][j]=a[i][j]+b[i][j];
//	
//	}    
//}
//
//for(i=0;i<2;i++)
//{
//	for(j=0;j<2;j++)
//	{
//		printf("%d/t",sum[i][j]);
//	}
//	printf("\n");
//	{
//		{
//		
//		return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int a[7]={21,56,32,52,63,12,48};
//	int i;
//	for(i=0;i<7;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int a[]={12,13,14,15,16,17};
//	int i;
//	for (i=0;i<=5;i++)
//	{
//		printf("%d\n",a[i]);	
//	}
//
//	return 0;
//}
//output
//12
//13
//14
//15
//16
//17


//#include<stdio.h>
//int main()
//{
//	int a[5];
//	int i;
//	printf(" Please Enter the aray elements:");
//	for(i=0;i<=5;i++)
//	{
//		scanf("%d\n",&a[i]);
//	}
//	printf("Enter of array are:");
//	for(i=0;i<=5;i++)
//	{
//		printf("%d\t",a[i]);
//	}
//	
//	return 0;
//}
//output
// Please Enter the aray elements:1
//2
//3
//4
//5
//6
//7
//Enter of array are:1    2       3       4       5       6


//#include<stdio.h>
//int main()
//{
//	int a[7]={0};
//	
//	int i;
//	printf("Enter the array element:");
//	for(i=0;i<=7;i++)
//	printf("%d\n",a[i]);
//	return 0;
//	
//}
//output
//Enter the array element:0
//0
//0
//0
//0
//0
//0
//7  

//#include<stdio.h>
//int main()
//{
//	int a[2]={11,22,33,44,55};
//	int i;
//	printf("Enter the array:");
//	for(i=0;i<=2;i++)
//	{
//	printf("%d\n",a[i]);
//	}
//	return 0;
//}
//output
//Enter the array:11
//22
//2

                    //call by value
//#include<stdio.h>
//void show(char ch)
//{
//	printf("%c\t",ch); 	
//}
//int main()
//{
//	char arr[]={'a','b','c','d','e','f','g','h','i','j'};
//	for(int x=0;x<10;x++)
//	{
//		show(arr[x]);//value of array //element are passed as an arguments
//}
//return 0;
//}
//output
//a       b       c       d       e       f       g       h       i       j



//#include<stdio.h>
//void main(){
//	int a[2][3]={1,2,3,4,5};
//	int i=0,j=0;
//	for (i=0;i<2;i++)
//	{
//		for(j=0;i<3;j++)
//		printf("%d",a[i][j]);
//	}
//return 0;	
//}
//output
//Runtime error]

//#include<stdio.h>
//int main()
//{
//	int ary[9];
//	return 0;
//}
//output
//nothing pritntf
//
//#include<stdio.h>
//int main()
//{
//	int a[3]={10,12,14}
//	a[1]=10;
//	int i=0;
//	while(i<3)
//	{
//		printf("%d",a[i];i++)
//	}
//	}
//	output
//	run time error

//#include<stdio.h>
//int main()
//{
//	int a[]={1,2,3,4};
//	int b[4]={5,6,7,8};
//	printf("%d,%d",a[0],b[0]);
//}
//output
//1,5

//#include<stdio.h>
//#include<conio.h>
//void modifyarray(int b[],int size)
//{
//	int j;//counter
//	for(j=0;j<size;j++)
//	{
//		b[j]*=2;
//	}//end for
//	
//}//end function modifyarray
//void modifyElement(int e)
//{
//	printf("value in modifiyElement is %d\n",e*=2);
//	
//
//}


//#include<stdio.h>
////function main began program execution
//int main()
//{
//	char string1[20];//reserved 20 character
//	char string2[20];//reserved 20 character
//	int i;//count
//	//read string  from user into array string
//	printf("Enter a string:");
//	scanf("%s",string1);
//	
//	printf("Enter a string:");
//	scanf("%s",string2);
//	//output string
//	printf("string1 is:%s\nstring2 is:%s\n",string1,string2);
//	printf("\n");
//	return 0;//indicate successful termination
//}
//output
//Enter a string:lovely
//Enter a string:professional
//string1 is:lovely
//string2 is:professional


//#include<stdio.h>
//#define size 11
//int main()
//{
//	int a[size]={1,3,5,4,7,2,99,16,45,34,34};
//	int i;
//	int total=0;
//	for(i=0;i<size;i++){
//		total +=a[i];
//		
//	}
//	printf("total of array elements values is :%d\n",total);
//	return 0;
//}
//output
//total of array elements values is :250





























