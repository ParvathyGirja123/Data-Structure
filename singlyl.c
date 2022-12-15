#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head=NULL,*temp;
void insertf();
void inserte();
void insertp();
void deletef();
void deletee();
void deletep();
void search();
void display();
int ch;
void  main()
{
	int choice;
	do
	{
		struct node*newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{	
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you want to continue 0/1\n");
		scanf("%d",&choice);
	
	}
	while(choice==1);
	do
	{
		printf("\n1.Insert at front\n 2.Insert at end\n 3.insert at any position\n 4.Delete at front\n 5.Delete at end\n 6.Delete from any position\n 7.Display\n8.Search Element\n9.Exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertf();
				break;
			case 2:
				inserte();
				break;
			case 3:
				insertp();
				break;
			case 4:
				deletef();
				break;
			case 5:
				deletee();
				break;
			case 6:
				deletep();
				break;
			case 7:
				display();	
				break;
			case 8:
				search();
				break;
			case 9:
				break;
			default:
				printf("Invalid choice");
		}
	}
	while(ch!=9);
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

void insertf()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data of the newly inserting node at front:");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
}
void inserte()
{
 	struct node*newnode;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("Enter the data of the newly inserting node at end:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	temp=head;
	while(temp->next!=0)
	{
	 	temp=temp->next;
	 }
	 	temp->next=newnode;
}
void insertp()
{
	int p,i=1;
	printf("Enter the position:");
	scanf("%d",&p);
	struct node*newnode;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("Enter the data of the newly inserting node at position:");
	scanf("%d",&newnode->data);
	temp=head;
	while(i<p)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void deletef()
{
	temp=head;
	head=head->next;
	free(temp);
	printf("Deleted from front");
}
void deletee()
{
	struct node*prev;
	temp=head;
	while(temp->next!=0)
	{
		prev=temp;
		temp=temp->next;
	}
		prev->next=NULL;
		printf("Deleted from end");
		free (temp);
}
void deletep()
{
	struct node* pre;
	int p,i=1;
	printf("Enter the position:");
	scanf("%d",&p);
	if(p==1)
	{
		deletef();
	}
	else
	{
		temp=head;
		while(i<p)
		{
			temp=temp->next;
			i++;
		}
		pre=temp->next;
		temp->next=pre->next;
		printf("\nDeleted from position\n");
		free(pre);
	}
}
void search()
{
 	int key,f=0;
 	printf("\nEnter the key to be searched:");
 	scanf("%d",&key);
 	temp=head;
 	while(temp!=NULL)
 	{
	 	if(temp->data==key)
 		{
 			f=1;
 			break;
		}
		temp=temp->next;
	}
       if(f==1)
     {
       	printf("\nElement is found\n");
      }  	
       else
     {
       		printf("\nElement is not found\n");
     }
}
