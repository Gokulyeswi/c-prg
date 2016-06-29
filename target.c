# c-prg
#include<stdio.h>
main()
{
	int i,target=9,sum=0;
	int arr[4]={2,7,11,15};
	for(i=0;i<4;i++)
	{
		if(arr[i]+arr[i+1]==target)
		printf("the elements are %d""%d",arr[i],arr[i+1]);
	}
	
}
