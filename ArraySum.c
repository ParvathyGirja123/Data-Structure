#include<stdio.h>
void main()
{
    int i,a[20],n,sum=0;
    printf("Enter the limit :\n");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
   printf("%d",sum);
   
}
