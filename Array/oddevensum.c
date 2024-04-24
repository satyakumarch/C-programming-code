#include<stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int sumEven=0;
	int sumodd=0;
	 int i;
	 for(i=0;i<=6;i++)

{
	if(i%2==0)
	sumEven+=arr[i];
	else
	sumodd+=arr[i];
	}
	int res=sumEven-sumodd;
	printf("The output is:%d",res);	
	return 0;
}
