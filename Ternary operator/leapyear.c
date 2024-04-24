#include<stdio.h>
int main(){
	
	int year;
	
	printf("Enter the year:");
	scanf("%d",&year);
	
	(year%4==0&&year%100!=0)?printf("Leap year"):
	(year%400==0) ?printf("Leap year"):printf("common year");
	
	return 0;
}
output
Enter the year:2000
Leap year
