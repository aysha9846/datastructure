#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,max;
int queue[100];
void enqueue()
{
	int item;
	printf("\n enter the elements\n");
	scanf("\n%d",&item);
	if(rear==max-1)
	{
		printf("\nOverflow");
		return;
	}
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=rear+1;
	}
	queue[rear]=item;
	printf("\nvalue inserted");
}
void dequeue()
{
	int item;
	if(front==-1 || front>rear)
	{
		printf("\nunderflow\n");
		return;
	}
	else
	{
		item=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
		printf("\n elements deleted");
	}
}
void display()
{
	int i;
	if(rear==-1)
	{
		printf("\nEmpty queue\n");
	}
	else
	{
		printf("\nElements in the queue are\n");
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}
	}
}
int main()
{
	int choice;
	printf("\nEnter the size of queue :");
	scanf("%d",&max);
	printf("queue operations using array");
	printf("\n1.Enqueue \n2.Dequeue \n3.display \n4.exit");
	while(choice!=4)
	{
		printf("\n Enter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:printf("\nExited");
			break;
			default:
			printf("\n Emter valid choice\n");
		}
	}
	return 0;
}
