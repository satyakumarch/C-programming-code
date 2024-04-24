#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[32];
	int r;
	
}s[20];
int main()
{
	FILE *fp;
	int n,i;
	printf("\nEnter total no of students:");
	scanf("%d",&n);
	fp=fopen("astruct.txt","w");
	for(i=0;i<n;i++)
	{
		printf("Enter name and roll no:");
		scanf("%s%d",s[i].name,&s[i].r);
		
	}
	fwrite(&s,sizeof(s),1,fp);
	fclose(fp);
	fp=fopen("astruct.txt","r");
	printf("\nData in file us:\n");
	for(i=0;i<n;i++)
	{
		printf("\n%s",s[i].name);
		printf("\t%d",s[i].r);
		
	}
	return 0;
	
}
//output
//Enter total no of students:3
//Enter name and roll no:vevek
//4
//Enter name and roll no:shayam
//3
//Enter name and roll no:radhe
//5
//
//Data in file us:
//
//vevek   4
//shayam  3
//radhe   5

