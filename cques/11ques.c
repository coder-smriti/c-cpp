#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value ofa,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    c=a;
    a=b;
    b=c;
    printf("After swap the value of a,b:%d%d",a,b);
    return 0;
}