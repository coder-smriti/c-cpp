#include<stdio.h>
int main()
{
    int x=5;
    x=(++x + x++ + ++x + x++);
    printf("the value of the expression:%d",x);
    return 0;
}