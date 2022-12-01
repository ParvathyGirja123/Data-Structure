#include<stdio.h>
void push();
void pop();
void display();
int a,stack[200],y,top=-1,ch,i;
void main()
{
 printf("Enter the size of stack:");
 scanf("%d",&a);
 do
 { 
  printf("Enter your choice:\n1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\t\n");
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
   	 printf("Exit.\n");
   	 break;
   default:
   	 printf("Invalid Entry.\n");
  }
 }
  while(ch!=4);
}
void push()
{
 if(top>=a-1)
 {
  printf("Stack is overflow.\n");
 }
 else
 {
  printf("Enter the element:");	
  scanf("%d",&y);
  top+=1;
  stack[top]=y;
 }
}
void pop()
{
 if(top<=0)
 {
   printf("Stack is underflow.\n");
 }
 else
 {
  printf("The popped element is:%d\n",stack[top]);
  top-=1;
  printf("Now the element is : %d \n",stack[top]);
 }
}
void display()
{
 if(top<0)
 {
  printf("Stack is empty.\n");
 }
 else
 {
  printf("The elements are:\n");	
  for(i=top;i>=0;i--)
  {
   printf("%d\n",stack[i]);
  }
 }
}  	
