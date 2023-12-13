#include<stdio.h>
#include<stdlib.h>
int queue[1000];
int front=-1;
int rear=-1;
int max;

void enqueue(int item)
{
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=item;
	}
	else if((rear+1)%max==front)
	{
		printf("queue is overflow");
	}
	else
	{
		rear=(rear+1)%max;
		queue[rear]=item;
	}
}

int dequeue()
{
	if((front==-1)&&(rear==-1))
	{
		printf("\nqueue is underflow");
	}
	else if(front==rear)
	{
		printf("\nThe dequeued element is %d",queue[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("\nthe dequeued element is %d",queue[front]);
		front=(front+1)%max;
	}
}

void display()
{
	int i;
	if(front==-1&&rear==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		printf("\nelements in the queue are :\n");
		for(i=front;i!=rear;i=(i+1)%max)
		{
			printf("%d\n",queue[i]);
		}
		printf("%d",queue[rear]);
	}
}

int main()
{
	int choice=1,n;
	printf("enter the size of the queue :\n");
	scanf("%d",&max);
	while(choice<4 && choice!=0)
	{
		printf("\n 1.enqueue");
		printf("\n 2.dequeue");
		printf("\n 3.display");
		printf("\n 4.exit");
		printf("\n enter your choice");
		scanf("%d",&choice);

	switch(choice)
	{
		case 1:printf("enter the number :");
			scanf("%d",&n);
			enqueue(n);
			break;
		case 2:dequeue();
			break;
		case 3:display();
			break;
		case 4:exit(0);
			break;
		default:printf("enter a valid choice :");
	}
}
}

		
