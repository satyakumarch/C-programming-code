#include<stdio.h>
int main(){
	int num1,num2,num3,max;
	printf("Enter the three number:");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	max=(num1>num2&&num1>num3)? num1:(num2>num3)?num2:num3;
	printf("maximum  between %d ,%d and %d =%d",num1,num2,num3,max);
}
output
Enter the three number:33
22
55
maximum  between 33 ,22 and 55 =55
