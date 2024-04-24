//#include<stdio.h>
//#include<string.h>
//int main(){
//	typedef struct pokemon{
//		int hp;
//		int speed;
//		int attack;
//		char tier;
//		char name[30];
//	} pokemon;
//	pokemon arr[3];
//	
//	arr[0].attack=50;
//	arr[0].hp=100;
//	arr[0].speed=30;
//	arr[0].tier='A';
//	strcpy(arr[0].name,"satya");
//	
//	arr[1].attack=200;
//	arr[1].hp=400;
//	arr[1].speed=20;
//	arr[1].tier='B';
//	strcpy(arr[1].name,"shivam");
//	
//	arr[2].attack=400;
//	arr[2].hp=600;
//	arr[2].speed=70;
//	arr[2].tier='B';
//	strcpy(arr[2].name,"santosh");
//	 
//	 for(int i=0;i<=3;i++)
//	 {
//	 	printf("%d\n",arr[i].attack);
//	 	printf("%d\n",arr[i].hp);
//	 	printf("%d\n",arr[i].speed);
//	 	printf("%c\n",arr[i].tier);
//		printf("%s\n",arr[i].name);
//	 }
//	return 0;
//}







#include<stdio.h>
#include<string.h>
int main(){
	 typedef struct pokemon{
	int hp;
	int speed;
	int attack;
	char tier;
	char name[30];
	
	} pokemon;
	 pokemon arr[2];
	
	arr[0].hp=100;
	arr[0].speed=300;
	arr[0].attack=200;
	arr[0].tier='A';
	strcpy(arr[0].name,"Satya");
	
	arr[1].hp=300;
	arr[1].speed=10;
	arr[1].attack=50;
	arr[1].tier='B';
	strcpy(arr[1].name,"Shyam");
	
	arr[2].hp=60;
	arr[2].speed=22;
	arr[2].attack=54;
	arr[2].tier='C';
	strcpy(arr[2].name,"shivam");
	
	for(int i=0;i<=3;i++)
	{
		printf(" Hp:%d\n",arr[i].hp);
		printf("Speed:%d\n",arr[i].speed);
		printf("Attack%d\n",arr[i].attack);
		printf("Tier:%c\n",arr[i].tier);
		printf("Name:%s\n",arr[i].name);
		
	}
	

	
	return 0;
}
















