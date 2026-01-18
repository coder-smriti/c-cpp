#include<stdio.h>
int main()
{
    int x=5;
    int y;
    y=(x++ + ++x + ++x);
    printf("the value of the expression:%d",x++ + ++x + ++x);
    return 0;
}