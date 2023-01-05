#include<stdio.h>
int queue[10],x,front=-1,rear=-1;
void enqueue(int n)
{
	if(front==-1&&rear==-1)
	{
		front=rear=0;
		queue[rear]=n;
	}
	else if((rear+1)%x==front)
	{
		printf("Queue is overflow\n");
	}
	else
	{
		rear=(rear+1)%x;
		queue[rear]=n;
	}
}
void dequeue()
{
	if(front==-1&&rear==-1)
	{
		printf("Queue is underflow\n");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		printf("%d\n",queue[front]);
		front=(front+1)%x;
	}
}
void display()
{
	int i=front;
	if(front==-1&&rear==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		while(i!=rear)
		{
			printf("%d  ",queue[i]);
			i=(i+1)%x;
		}
		printf("%d\n",queue[rear]);
	}
}
void main()
{
	int n,choice;
	printf("Enter queue size:");
	scanf("%d",&x);
	do
	{
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the data:");
				scanf("%d",&n);
				enqueue(n);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exited");
				break;
			default:
				printf("Enter a valid choice\n");
		}
	}
	while(choice!=4);
}
