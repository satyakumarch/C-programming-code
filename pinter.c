//#include<stdio.h>
//int main()
//{
//	int n,rev=0,a;
//	int *n1,*rev1,*a1;
//	n1=&n;
//	rev1=&rev;
//	a1=&a;
//	scanf("%d",n1);
//	while(*n1!=0)
//	{
//		*a1=*n1%10;
//		*rev1=*rev1*10+*a1;
//		*n1=*n1/10;
//	}
//	printf("rev=%d",rev1 );
//	return 0;
//	
//	}


//#include<stdio.h>
//void aoc(float *,float *);
//int main()
//{
//	float radius,area;
//	scanf("%f",&radius);
//	aoc(&radius,&area);
//	pritnf("\n area in main=%f",area);
//	return 0;
//	
//}
//void 
//
//#include<stdio.h>
//int main(){
//	int a=25;
//	int *x=&a;n     
//	
//	printf("%d\n",a);
//	return 0;
//}
#include<stdio.h>
int min(int a,int b){
if(a<b) return a;
else return b;
}
int gcd(int a,int b){
	int hcf;
	int i;
for( i=min(a,b);i>=1;i--){
	if(a%i==0 && b%i==0){
		hcf=i;
		break;
	}
}
return hcf;
}
int main(){
int a;
printf("Enter 1st number:");
scanf("%d",&a);
int b;
printf("Enter 2st number:");
scanf("%d",&b);
int hcf=gcd(a,b);
printf("The HCF/GCD of %d and %d is:%d",a,b,hcf);
return 0;
	
}
