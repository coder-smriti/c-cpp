#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a,b");
    scanf("%d%d",&a,&b);
    b=a<<2;
    printf("The value after perforning  operation b=a<<2:%d",b=a<<2);
    return 0;
}