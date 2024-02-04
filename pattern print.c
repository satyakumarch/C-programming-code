//Half pyramid of stars(*)

//#include<stdio.h>
//int main()
//{
//	int i ,j ,rows;
//	printf("Enter the number of rows:");
//	scanf("%d",&rows);
//	for (i =1;i<=rows;++i)
//	{
//		for(j =1;j<=i;++j){
//			printf("*");	
//		}
//		printf("\n");
//		
//	
//		
//	}
//	return 0;
//}
//output
//Enter the number of rows:6
//*
//**
//***
//****
//*****
//******


//Half Pyramid of number
#include<stdio.h>
int main(){
	int i ,j,rows;
	printf("Enter the numbr of rows:");
	scanf("%d",&rows);
	for (i=1;i<=rows;++i){
		for (j =1;j<=i;++j){
		  printf(" %d ", j);
		}
		printf(" \n ");	
	}
    return 0;
}
//output
//Enter the numbr of rows:6
// 1
//  1  2
//  1  2  3
//  1  2  3  4
//  1  2  3  4  5
//  1  2  3  4  5  6

//#include<stdio.h>
//#include<stdio.h>
//int main(){
//	int i,j;
//	char input,alphabet='A';
//	printf("Enter a character to print at least :");
//	scanf("%c",&input);
//	input = toupper(input);
//	for (i=1;i<=(input-'A'+1);++i){
//		for ( j=1;j<=i;++j){
//			prinntf("%c",alphabet);
//		}
//		++alphabet;
//		printf("\n");
//		
//	}
//	return 0;
//}



