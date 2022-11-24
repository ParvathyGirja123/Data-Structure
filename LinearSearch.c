#include<stdio.h>
void main()
    {
        int a[5],i,k=0,n;
        printf("Enter the limit :");
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("Enter the key element :");
        scanf("%d",&k);
        for(i=0;i<n;i++)
            {
                if(a[i]==k)
                    {
                        k=1;
                        break;
                    }
            }
                if(k==1)
                {
                    printf("The elements is found");
                }
                else
                    printf("The elements is not found");
     }
