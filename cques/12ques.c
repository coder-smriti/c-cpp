#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a,b:");
    scanf("%d%d",&a,&b);
    a=b;
    b=a;
    printf(" after swap the value ofa,b:%d%d");
    return 0;
}