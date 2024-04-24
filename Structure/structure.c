//#include<stdio.h>
// int main(){
// 	
// struct student{
// int Roll_no;
// char Name;
// char subject;
// int marks;
//	};
// struct student ram;
// ram.Roll_no=1;
// ram.Name='shyam';.2
// ram.subject='english';
// ram.marks=40;
// printf("%d",ram.marks);
//return 0;
//}
 
//#include<stdio.h>
//int main(){
//	struct pokemon{
//		int hp;
//		int speed;
//		int attack;
//		char tier;
//		
//	};
//	struct pokemon pikachu;
//	pikachu.hp=60;
//	pikachu.speed=100;
//	pikachu.attack=40;
//	pikachu.tier='A';
//	
//	printf("%d",pikachu.attack);
//	
//	struct pokemon charizard;
//	charizard.hp=70;
//	charizard.speed=800;
//	charizard.attack=90;
//    charizard.tier='B';
//	
//	struct pokemon mewtwo;
//	mewtwo.hp=30;
//	mewtwo.speed=400;
//	mewtwo.attack=60;
//	mewtwo .tier='X';
//	
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main(){
//	struct book{
//		int no_of_pages;
//		char name[15];
//		int prices;
//	} a,b,c;
//	a.no_of_pages=122;
//	strcpy(a.name,"English");
//	a.prices=2000;
//	
////	b.no_of_pages=122;
////	strcpy(b.name,"math");
////	b.prices=2000;
//	
//	printf("%d\n",a.no_of_pages);
//	printf("%s\n",a.name);
//	printf("%d\n",a.prices);
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main() {
//    struct student{
//        int age;
//        char first_name[15];
//        char last_name[15];
//        int standard_student;
//    };
//    struct student detail;
//    
//	detail.age=15;
//    strcpy(detail.first_name,"john");
//    strcpy(detail.last_name,"carmack");
//    detail.standard_student=10;
//    
//    printf("%d ",detail.age);
//	printf("%s ",detail.first_name);
//	printf("%s ",detail.last_name);
//    printf("%d ",detail.standard_student);
//    
//    return 0;
//}
//
//#include<stdio.h>
//struct job{
//	char name[32];
//	double salary;
//	
//}u={"rina",485784};
//union job1
//{
//	char name[32];
//	double salary;
//	}u1={"rohan"};
//	int main()
//	{
//		printf("%s\n",u.name);
//		printf("%s\n",u1.name);
//		printf("%f\n",u.salary);
//		printf("%f\n",u1.salary);
//		printf("%d\n",sizeof(u));
//		printf("%d\n",sizeof(u1));
//		//return 0;
//								
//	}
//	output
//	rina
//rohan
//485784.000000
//0.000000
//40
//32


//
//
//#include <stdio.h>
//
//struct player {
//    int id;
//    int runs;
//};
//
//int main() {
//    struct player team[11]; // array of 11 player structures
//    int i, total_score = 0;
//    
//    // input player IDs and runs scored
//    //printf("Enter player IDs and runs scored:\n");
//    for (i = 0; i < 11; i++) {
//        //printf( "", i+1);
//        scanf("%d %d", &team[i].id, &team[i].runs);
//        total_score += team[i].runs; // add player's runs to total score
//    }
//    
//    // display total score
//    printf("%d\n", total_score);
//    
//    return 0;
//}
//

//
//#include<stdio.h>
//int main(){
//	char carname[20];
//	printf("Enter the name of the car:");
//	scanf("%s",carname);
//	printf("\nName of the car is:%s",carname);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char name[100];
//	puts("\nEnter  a string:");
//	gets(name);
//	printf("\nstring is:");
//	puts(name);
//}

//#include<stdio.h>
//int main()
//{
//	char name[]={"hello"};
//	int i=0;
//	while (name[i]!='\0')
//	{
//		printf("%c",name[i]);
//		i++;
//	}
//	}
//strcpy() function
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char ori[20],dup[20];
//	char*z;
//	printf("\nEntr your name:");
//	gets(ori);
//	z=strcpy(dup,ori);
//	printf("original string is:%s",ori);
//	printf("\nDuplicate string is:%s",dup);
//	printf("\nValue of z is:%s",z);
//	return 0;
//}


//strncpy
//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str1[15],str2[15];
//	int n;
//	printf("\nEnter source string:");
//	gets(str1);
//	printf("\nEnter destination sring:");
//	gets(str2);
//	printf("Enter number of character to replace in destination string:");
//	scanf("%d",&n);
//	strncpy(str2,str1,n);
//	printf("source string is :%s",str1);
//	printf("\nDestination string is :%s",str2);
//	
//	return 0;
//}
//output
//Enter source string:kathmandu
//
//Enter destination sring:uttarpradesh
//Enter number of character to replace in destination string:4
//source string is :kathmandu
//Destination string is :kathrpradesh


//strcat
//#include<stdio.h>
//int  main()
//{
//	char str1[20],str2[10];
//	printf("\nEnter first string:");
//	gets(str1);
//	printf("\nEnter second string:");
//	gets(str2);
//	strcat(str1,str2);
//	printf("\n string sfter concatenation:%s",str1);
//	return 0;
//}


//strncat
//#include<stdio.h>
//int main(){
//	char str1[20],str2[20];
//	int n;
//	printf("\nEnter the string:");
//	gets(str1);
//	printf("\nEntre the second string:");
//	gets(str2);
//	printf("\nEnter number of character you want to combine:");
//	scanf("%d",&n);
//	strncat(str1,str2,n);
//	printf("\nString after concentation:%s",str1);
//	return 0;
//}
//Enter the string:satya
//
//Entre the second string:kumar
//
//Enter number of character you want to combine:3
//
//String after concentation:satya kum

//second output



//Enter the string:lovely
//
//Entre the second string:professional
//
//Enter number of character you want to combine:4
//
//String after concentation:lovely prof

//strcmp
//#include<stdio.h>
//int main(){
//	char str1[20],str2[20];
//	int x;
//	printf("\nEnter first string:");
//	gets(str1);
//	printf("\nEnter second string:");
//	gets(str2);
//	x=strcmp(str1,str2);
//	if(x==0)
//	{
//		printf("\nstring are equall.");
//		
//	}
//	else if(x>0)
//
//{
//	printf("\n First string is greater than second string are not equall");
//	
//}
//else
//{
//	printf("\nFirst string is less than second string(string are not equall)");
//	
//}
// 
//}
//output
//
//Enter first string:lovely
//
//Enter second string:professional
//
//First string is less than second string(string are not equall)
//
//#include<stdio.h>
//int main()
//{
//	char str[]="lovely professional university";
//	printf("\nLength of the string is:%d",strlen(str));
//	return 0;
//}
//output
//Length of the string is:30

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[100]=("lovely professional university");
//	printf("%s",strrev(s));
//	return 0;
//}
//output
//ytisrevinu lanoisseforp ylevol

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[]="welcome to Lpu";
//	strupr(s);
//	puts(s);
//	strlwr(s);
//	puts(s);
//	return 0;
//}
//output
//WELCOME TO LPU
//welcome to lpu

//#include<stdio.h>
//int main()
//{
//	char str[]={"c","a","t","\0"};
//	printf("%s",str);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str1[20]="john";
//	char str2[20]="mohan";
//	str2[20]=str1[20];
//	printf("%s",str2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char country[]="BRAZIL";
//	char *ptr;ptr=country;
//	while(*ptr!='\0')
//	{
//		printf("%c",*ptr);
//		ptr++;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[20]="hello",str2[20]="world";
//	printf("%s\n",strcpy(str2,strcat(str1,str2)));
//	return 0;
//	
//}
//output
//helloworld


#include<stdio.h>
int main()
{
	char str[3]="sunnday";
	printf("the output is:%s",str);
}


































