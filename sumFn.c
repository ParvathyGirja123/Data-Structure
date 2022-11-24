#include<stdio.h>
int main()
    {
            int num1,num2,result,sum();
            printf("Enter the numbers :");
            scanf("%d%d",&num1,&num2);
            result=sum(num1,num2);
            printf("Addition of two numbers is :%d",result);
            return 0;
    }
int sum(int num1,int num2)
    {
            int num3;
            num3=num1+num2;
            return(num3);
    }
