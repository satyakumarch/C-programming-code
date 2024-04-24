#include<stdio.h>
int main(){
	char ch;
	
	printf("Enter the alphabets:");
	scanf("%c",&ch);
	
	(ch>='a'&&ch>='z')||	(ch>='A'&&ch>='Z')?
	printf("it is a ALPLABET"):
	printf("is it not a ALPLHABET");
	   return 0;
}
output
Enter the alphabets:@
is it not a ALPLHABET
