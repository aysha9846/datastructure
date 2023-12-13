#include<stdio.h>
int main()
{
	int a[50];
	int n;
	int i,sum=0;
	printf("enter the number of elements:");
	scanf("%d",&n);
	if(n>50)
	{
		printf("please enter the array size below 50");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
	}
	else if(n<0)
	{
		printf("enter atleast one element:");
	}
	else
	{
		printf("entered number is out of limit");
	}
	return 0;
}
