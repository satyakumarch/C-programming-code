#include<stdio.h>
float add(float,float);
float multipy(float,float);
float subtract(float,float);
float divide(float,float);

 main()
{
	float x,y;
	int n;
	
	printf("Enter the no. 1.Add    2.multipy    3.Subtract       4.divide\n");
	scanf("%d",&n);
	
	switch(n)
	{
	case 1:
		scanf("%f %f",&x,&y);
		add(x,y);
		break;
	case 2:
		scanf("%f %f",&x,&y);
		multipy(x,y);
		break;
	case 3:
		scanf("%f %f",&x,&y);
		subtract(x,y);
		break;
	case 4:
		scanf("%f %f",&x,&y);
		divide(x,y);
		break;
	default:
		printf("Enter the valid number");
		break;
	}
}

float add(float a,float b);
  {
a=a+b;
printf("%f",a);
	
}
float multipy(float a,float b);
{
a=a*b;
printf("%f",a);
	
}

float subtract(float a,float b);
{
a=a-b;
printf("%f",a);
	
}

float divide(float a,float b);
{
a=a/b;
printf("%f",a);
	
}


