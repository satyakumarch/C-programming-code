#include<stdio.h>
int main(){
	int num,n,newnum;
	printf("Enter any number:");
	scanf("%d",&num);
	
	printf("Enter nth  bit to set (0-30):");
	scanf("%d",&n);
	
	newnum=(1<<n)|num;
	
	printf("Bit set successfully .\n\n");
	printf("Number before setting %d bit:%d(in dicimal)\n",n,num);
	printf("Number after setting %d bit:%d (in dicimal)\n",n,newnum);
	
	return 0;
	output
	Enter any number:13
Enter nth  bit to set (0-30):
3
Bit set successfully .

Number before setting 3 bit:13(in dicimal)
Number after setting 3 bit:13 (in dicimal)
}
