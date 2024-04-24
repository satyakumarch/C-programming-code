//// Question:A record contains name of tha cricketer ,his age,number of
//// the test matches that
//// he played and the average runs that he has scored
////in each test match.create an array of structure to hold records of 20 such 
////cricketer and then write
////a program to read these record?
//
//#include<stdio.h>
//#include<string.h>
//int main(){
//	typedef struct cricketer{
//		char  firstname[15];
//		char lastname[15];
//		int age;
//		int noofmatches;
//		float average;
//	} cricketer;
//	//char arr[15];
//	 cricketer arr[3];//we can only do for 3 cricketer
//	 for(int i=0;i<3;i++){
//	 printf("\nEnter the first name of the cricketer:");
//	 scanf("%s",arr[i].firstname);
//	 printf("\nEnter the last name of the cricketer:");
//	 scanf("%s",arr[i].lastname);
//	 printf("\nEnter the age of the cricketr:");
//	 scanf("%d",&arr[i].age);
//	 printf("\nEnter the no of matches:");
//	 scanf("%d",&arr[i].noofmatches);
//	 printf("\nEnter the average:");
//	 scanf("%f",&arr[i].average);
//	 }
//	 
//	 for(int i=0;i<3;i++)
//    {
//    printf("Name:%s %s\n",arr[i].firstname,arr[i].lastname);	 
//	printf("Age:%d\n",arr[i].age);
//	printf("No of matches:%d\n",arr[i].noofmatches);
//	printf("Agerage:%f\n\n",arr[i].average);
//	
//	}
//    return 0;
//}
////output
//Enter the first name of the cricketer:mahendra
//
//Enter the last name of the cricketer:dohni
//
//Enter the age of the cricketr:45
//
//Enter the no of matches:23
//
//Enter the average:34
//
//Enter the first name of the cricketer:Sachin
//
//Enter the last name of the cricketer:kumar
//
//Enter the age of the cricketr:25
//
//Enter the no of matches:34
//
//Enter the average:54
//
//Enter the first name of the cricketer:Rohit
//
//Enter the last name of the cricketer:Sharma
//
//Enter the age of the cricketr:34
//
//Enter the no of matches:23
//
//Enter the average:54
//Name:mahendra dohni
//Age:45
//No of matches:23
//Agerage:34.000000
//
//Name:Sachin kumar
//Age:25
//No of matches:34
//Agerage:54.000000
//
//Name:Rohit Sharma
//Age:34
//No of matches:23
//Agerage:54.000000

//#include<stdio.h>
//#include<string.h>
//int main{
//	typedef struct cricket{
//		char firstname[30];
//		char lastname[30];
//		int age;
//		int noofscore;
//		float average;
//	} cricket;
//	
//	  cricket arr[3];
//	  
//	  for(int i=0;i<3;i++) {
//	  printf("\nEnter firstname:");
//	  scanf("%s\n",arr[i].firstname);
//	  printf("\nEnter lastname:");
//	  scanf("%s\n",arr[i].lastname);
//	  printf("\nEnter age:");
//	  scanf("%s\n",&arr[i].age);
//	  printf("\nEnter noofscore:");
//	  scanf("%s\n",&arr[i].noofscore);
//	  printf("\nEnter average:");
//	  scanf("%s\n",&arr[i].average);
//	  }
//	  for (int i=0;i<3;i++)
//	  {
//	  	printf("Name:%s %s\n",arr[i].firstname,arr[i].lastname);
//	  	printf("Age:%d\n",arr[i].age);
//	  	printf("noofscore:%d\n",arr[i].noofscore);
//	  	printf("Average:%d\n",arr[i].average);
//	  	
//	  }
//	return 0;
//}







#include <stdio.h>

struct player {
    int id;
    int runs;
};

int main() {
    struct player team[11]; // array of 11 player structures
    int i, total_score = 0;
    
    // input player IDs and runs scored
    printf("Enter player IDs and runs scored:\n");
    for (i = 0; i < 11; i++) {
        printf( "", i+1);
        scanf("%d %d", &team[i].id, &team[i].runs);
        total_score += team[i].runs; // add player's runs to total score
    }
    
    // display total score
    printf("Total score: %d\n", total_score);
    
    return 0;
}









