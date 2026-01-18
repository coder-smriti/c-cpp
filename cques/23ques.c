#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a,b");
    scanf("%d%d",&a,&b);
    b=a>>1;
    printf("The value after perforning  operation b=a>>1:%d",b=a>>1);
    return 0;
}