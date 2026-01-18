#include<stdio.h>
int main()
    {
        int num1;
        int num2;
        int num3;
        num3=num1;
        num1=num2;
        num2=num3;
        printf("Enter the value of num1,num2:");
        scanf("%d%d",&num1,&num2);
        num1=num1^num2;
        num2=num1^num2;
        printf("num2=%d\n",num2);
        num1=num1^num2;
        printf("num1=%d\n",num1);
      return 0;
    }
