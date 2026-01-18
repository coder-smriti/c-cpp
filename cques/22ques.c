#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a,b");
    scanf("%d%d",&a,&b);
    b=a<<4;
    printf("The value after perforning  operation b=a<<4:%d",b=a<<4);
    return 0;
}