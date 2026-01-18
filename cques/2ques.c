#include<stdio.h>
int main()
{
    int a,b,c;
    int sum;
    int per;
    printf("Enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("sum:%d",sum);
    per=(a+b+c)*300/100;
    printf("per:%d",per);
}