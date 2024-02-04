//// Function without argument and return value

//#include<stdio.h>
//void printName();
//void main()
//{
//	printf("Hello ");
//	printName();
//	
//}
//void printName()
//{
//	printf("javapoint");
//}
//output
//Hello javapoint

                        //Example 2
//#include<stdio.h>
// void sum();
// void main()
// {
// 	printf("\nGoing to calculate the sum of two numbers:");
// 	sum();
// }
// void sum()
// {
// 	int a,b;
// 	printf("\nEnter two  numbers:");
// 	scanf("%d%d",&a,&b);
// 	printf("The sum is %d:",a+b);
// }
// output
// Going to calculate the sum of two numbers:
//Enter two  numbers:12 23
//The sum is 35:

//Function without argument anf return value
//#include<stdio.h>
//int sum();
//void main()
//{
//	int result;
//	printf("\nCalculate the sum of two numbers:");
//	result=sum();
//	printf("%d",result);
//}
//int sum()
//{
//	int a,b;
//	printf("\nEnter two numbers:");
//	scanf("%d%d",&a,&b);
//	return a+b;
//}
//output
//Calculate the sum of two numbers:
//Enter two numbers:20
//10
//30

//calculate the area of the square
//#include<stdio.h>
//int sum();
//void main()
//{
//	printf("calculate the area of the square\n:");
//	float area=square();
//	printf("The area of the square:%f\n",area);
//	
//}
//int square()
//{
//	float side;
//	printf("Enter the length of the side in meters:");
//	scanf("%f",&side);
//	return side*side;
//}
//output
//calculate the area of the square
//:Enter the length of the side in meters:10
//The area of the square:100.000000

//function with argument and without return value
//#include<stdio.h>
// void sum(int ,int);
// void main()
//
//{
//	int a,b,result;
//	printf("\ncalculate the sum of two numbers:");
//	printf("\nEnter two numbers:");
//	scanf("%d%d",&a,&b);
//	sum(a,b);
//	
//}
//void sum(int a,int b)
//{
//	printf("\n The sum is %d",a+b);
//}
//output
//calculate the sum of two numbers:
//Enter two numbers:20
//30
//
// The sum is 50

//program to calculate the aveage of 5 number;
//#include<stdio.h>
//void average(int,int,int,int,int);
//void main()
//{
//	int a,b,c,d,e;
//	printf("\n calculate the average of five numbers:");
//	printf("\nEnter five numbers:");
//	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//	average(a,b,c,d,e);
//	
//}
//void average(int a,int b,int c,int d,int e)
//{
//	float avg;
//	avg=(a+b+c+d+e)/5;
//	printf("The average of the given number is :%f",avg);
//}
//output
// calculate the average of five numbers:
//Enter five numbers:10 20 30 40 50
//The average of the given number is :30.00000

//
#include <stdio.h>

//// User-defined function
void checkAge(int age) {
  if (age <= 0) {
    printf("Enter correct age\n");
  } else if (age >= 18 && age <= 100) {
    printf("You are eligible to vote\n");
  } else {
    printf("Not eligible to vote\n");
//  }
////}
////
//// Main function
int main() {
  int age;
//
  printf("Enter your age: ");
  scanf("%d", &age);

//////  // Call the user-defined function to check age eligibility
    checkAge(age);

  return 0;
////}
  
#include <stdio.h>

//// User-defined function
void reverseOrder(int n) {
  int arr[n], i;

//  // Check if n is less than or equal to zero
  if (n <= 0) {
    printf("Invalid input\n");
    return;
  }

//  // Store the numbers in an array
  printf("Enter %d numbers: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
//
//  // Display the numbers in reverse order
  printf("The numbers in reverse order are: ");
  for (i = n - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }
}
//
//// Main function
int main() {
  int n;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Pass n as an argument to user-defined function
  reverseOrder(n);

      return 0;
//}


//#include <stdio.h>
//
//// User-defined function
//void displayEvenElements(int arr[], int n) {
//  int i, flag = 0;
////
////  // Display even elements of the array
//  for (i = 0; i < n; i++) {
//    if (arr[i] % 2 == 0) {
//      printf("%d\n", arr[i]);
//      flag = 1;
//    }
//  }
//
//  // Check if there are no even elements
//  if (flag == 0) {
//    printf("No output\n");
//  }
//}
//
//// Main function
//int main() {
//  int N, i;
//
//  printf("Enter the number of elements (maximum 10): ");
//  scanf("%d", &N);
//
//  // Declare an array of size N and take input from the user
//  int arr[N];
//  printf("Enter %d integer numbers: ", N);
//  for (i = 0; i < N; i++) {
//    scanf("%d", &arr[i]);
//  }
//
//  // Call the user-defined function to display even elements
//  displayEvenElements(arr, N);
//
//  return 0;
//}  

//
//#include <stdio.h>
//
//// User-defined function
//void checkInput(int num) {
//  if (num < 10 || num > 1000) {
//    printf("Invalid input\n");
//  }
//  else {
//    printf("Valid input\n");
//  }
//}
//
//// Main function
//int main() {
//  int num;
//
//  printf("Enter an integer: ");
//  scanf("%d", &num);
//
//  // Pass input as argument to user-defined function
//  checkInput(num);
//
//  return 0;
//}

















































