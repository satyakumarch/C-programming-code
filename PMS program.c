//#include<stdio.h>
//int main(){
//	printf("hello world");
//}

//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	printf("\nEnter the number a and b\n");
//	scanf("%d%d",&a,&b);
//	c=a+b;
//	printf("\n Sum is %d:\n",c);
//	printf("\n Sum of a and b is %d:\n",c);
//	printf("\n a+b is %d\n",c);
//	printf("\n %d + %d is %d:\n",c);
//	printf("\n(%d+%d=%d):\n",a,b,c);
//	
//}

//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	printf("\nEnter the number a and b \n");
//	scanf("%d %d",&a,&b);
//	c=a+b;
//	printf("sum is %d:\n",c);
//	
//}
//
//#include<stdio.h>
//int main()
//{
//	int p,t,r;
//	float si;
//	printf("\nEnter  the principal:");
//	scanf("%d",&p);
//	printf("\nEnter  the time:");
//	scanf("%d",&t);
//	printf("\nEnter  the rate:");
//	scanf("%d",&r);
//	
//	si=(p*t*r)/100;
//	printf("The simple interrest is:%f",si);
//	
//	
//}

//#include<stdio.h>
//int main()
//{
//	int p,t,r;
//	float A,CI;
//	printf("\nEnter the principal,time ,rate:");
//	scanf("%d %d %d",&p,&t,&r);
//	
//	//A=p*pow(1+(r/100),t);
//	
//	CI=A-p;
//	//printf("\nThe amount is %f:",A);
//	printf("\nThe compound interest is %f:",CI);
//	
//}

//#include<stdio.h>
//int main()
//{
//	int a,b,c,d,e;
//	float avg;
//	printf("\n Enter the five subject marks: ");
//	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//	
//	avg=(a+b+c+d+e)/5;
//	
//	printf("\nThe average mark is %.2f:",avg);
//	
//}

//WAP to enter a string and convert all smaller letter into capital letter using pointer.
//#include<stdio.h>
//int main()
//{
//	char a[100];
//	gets(a);
//	
//	char *p=&a;
//	while(*p!=NULL)
//	{
//		if(*p>=97&&*p<=122)
//		*p=(char)((int)*p)-32;
//		*p++;
//		
//	}
//	printf("%s",a);
//	return 0;
//}
//
//output
//Satya Kumar Chaudhary
//SATYA KUMAR CHAUDHARY

//WAP to ask to create an array ,enter value in it and add 2 in each element of array using pointer and display the array.
//#include<stdio.h>
//int main()
//{
//	int n,i;
//	printf("Enter the size
 //of array\n");
//	scanf("%d",&n);
//	int a[n];
//	
//	printf("Enter the elements\n");
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	
//	int *p=&a;
//	
//	for(i=0;i<n;i++)
//	{
//		*p=*p+2;
//		p++;
//	}
//	for(i=0;i<n;i++)
//	printf("Array is %d\n",a[i]);
//}

//Wap to ask the user to enter a string find length of string using pointer

//#include<stdio.h>
//int main()
//{
//	char a[100];
//	gets(a);
//	 char *p=&a;
//	 int c=0;
//	 while(*p!= NULL)
//	 {
//	 	c++;
//	 	*p++;
//	 	
//	 }
//	 printf("%d",c);
//}
//WAP to show the use of pointer to compute the sum of all element stored in array
//
//#include<stdio.h>
//int main()
//{
//	int n,i,s,*p;
//	printf("Entr the size of array\n");
//	scanf("%d",&n);
//	int a[n];
//	
//	printf("Enter the elements\n");
//	for(i=0;i<n;i++)
//	
//	int *p=&a;
//	s=0;
//	
//	for(i=0;i<n;i++)
//	{
//		s=s+*p;
//		p++;
//		
//	}
//	printf("sum of array is %d",s);
//	
//}


//wap to show accessing array elements using pointer
//#include<stdio.h>
//int main()
//{
//	int n,i;
//	printf("Enter the size of array\n");
//	scanf("%d",&n);
//	int a[n]; 
//	
//	printf("Enter the elements\n");
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	
//	int *p=&a;
//	
//	printf("Element of array are:");
//	for(i=0;i<n;i++)
//	{
//		printf("%u",*p);
//		p++;
//	}
//	return 0;
//}








