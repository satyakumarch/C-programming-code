//#include <stdio.h>
//
//int main()
//{
//    int num1, num2, max;
//
//    /*
//     * Input two number from user
//     */
//    printf("Enter two numbers: ");
//    scanf("%d%d", &num1, &num2);
//
//    /*
//     * If num1 > num2 then
//     *     assign num1 to max
//     * else
//     *     assign num2 to max 
//     */
//    max = (num1 > num2) ? num1 : num2;
//
//    printf("Maximum between %d and %d is: %d", num1, num2, max);
//
//    return 0;
//}
//output
//Enter two numbers: 20
//30
//Maximum between 20 and 30 is: 30

#include<stdio.h>
int main(){
	int num1,num2,max;
	printf("Enter two number:");
	scanf("%d %d",&num1,&num2);
      max=(num1>num2) ?num1:num2;
      printf("mmaximum between %d and %d is:%d",num1,num2,max);
      return 0;
	
}
