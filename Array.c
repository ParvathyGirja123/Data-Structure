#include<stdio.h>
void main()
    {
        int a[10],i,n;
        printf("Enter the limit :");
        scanf("%d",&n);
        printf("Enter the elements :");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("The array elements is :\n");
        for(i=0;i<n;i++)
            printf(" %d ",a[i]);
    }                                                         
                
