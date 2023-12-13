#include<stdio.h>
char setalpha[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','z'};

int main()
{
	char set1[26],set2[26];
	int result,i,n,m;
	printf("enter the size of the first set :");
	scanf("%d",&n);
	printf("enter the element of the first set:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&set1[i]);
	}
	printf("enter the size of the second set :");
	scanf("%d",&m);
	printf("enter the element of the second set:");
	for(i=0;i<m;i++)
	{
		scanf("%s",&set2[i]);
	}
}
void setUnion(int set1[]),int set2[])
{
	int i;	
	for(i=0;i<=setalpha;i++)
	bitstringUnion[i]=set1[i]|set2[i];
}
void setIntersection(int set1[],int set2[])
{
	for(in)
}
return 0;
}
