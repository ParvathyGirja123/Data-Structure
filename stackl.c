#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head=NULL,*temp;
void push();
void pop();
void display();
int ch;
void  main()
{
	do
	{
		printf("\n1.PUSH\n2.POP\n3.Display\n4.Exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exited\n");
				break;
			default:
				printf("Invalid choice");
		}
	}
	while(ch!=4);
}
void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	
}
void push()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data to be pushed:");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
}
void pop()
{
	if(head==NULL)
	{
		printf("Stack is underflow\n");
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
		printf("POPPED\n");
	}
}
