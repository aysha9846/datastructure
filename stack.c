#include<stdio.h>
int A[100],size,top=-1;
void push(int item)
{
	
	if(top==size-1)
	{
		printf("\n the stack is overflow");
	}
	else
	{
		top++;
		A[top]=item;
		
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nthe stack is underflow");
	}
	else
	{
		printf("\ndeleted element is : %d\n",A[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("\n elements in the stack");
		for(int i=top;i>=0;i--)
		{
			printf("\n%d",A[i]);
		}									
		
	}
	else
	{
		printf("\nstack is empty");
	}
}
void main()
{
	int choice=0,n;
	top=-1;
	printf("enter the size of the stack :");
	scanf("%d",&size);
	do
	{
		printf("\n1.push\n 2.pop\n 3.display\n 4.exit\n");
		printf("\n enter the choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the value to be added:");
			scanf("%d",&n);
			push(n);
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:printf("\n exited");
			break;
			default:
			printf("\n enter a valid choice");
		}
	}
	while(choice !=4);

}
