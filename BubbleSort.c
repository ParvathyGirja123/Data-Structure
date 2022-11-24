#include<stdio.h>
void main()
    {
        int a[5],temp,i,j,n;
        printf("Enter the Array Length :");
        scanf("%d",&n);
        for(i=0;i<n;i++)
            {
                printf("Enter the elements :");
                scanf("%d",&a[i]);
            }
        for(i=0;i<(n-i);i++)
            {
                for(j=0;j<(n-i);j++)
                    {
                        if(a[j]>a[j+1])
                            {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                            }
                     }
             }
        printf("Enter the elements to be sorted :");
        for(i=0;i<n;i++)
            printf(" %d ",a[i]);
     }
