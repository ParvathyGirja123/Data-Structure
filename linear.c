#include<stdio.h>
void main()
{
	int a[200	],i,n,l,f=0;
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}
	 printf("Enter the key:");
	 scanf("%d",&l);
	for(i=0;i<n;i++)
	{
	 if(a[i]==l)
	 {
	   f=1;
	   break;
	 }
	}
	if(f==1)
	{
	 printf("Element is found");
	}
	else
	{ 
	 printf("Element is not found");
	}
}
	
