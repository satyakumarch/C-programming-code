#include<stdio.h>
  #define max_size 100
  int main()
  {
  	int arr[max_size];
  	int i,max,min,size;
  	
  	printf("Enter size of the array:");
  	scanf("%d",&size);
  	
  	printf("Enter elements in the array:");
  	for(i=0;i<size;i++)
  	{
  		scanf("%d",&arr[i]);
	  }
	  max=arr[0];
	  min=arr[0];
	  for(i=1;i<size;i++)
	  {
	  	if(arr[i]>max)
	  	{
	  		max=arr[i];
		  }
		  if(arr[i]<min)
		  {
		  	min=arr[i];
		  	
		  }
	  }
	  printf("Miximum element=%d\n",max);
	  printf("Minimum element=%d\n",min);
	  
	  }
  output
Enter size of the array:5
Enter elements in the array:5
2
1
12
23
Miximum element=23
Minimum element=1
