#include<stdio.h>
int main()
{
    int leng;
    int heig;
    int areaoftriangle;
    printf("Enter the heig and leng:");
    scanf("%d%d",&heig,&leng);
    areaoftriangle=0.5*leng*heig;
    printf("area of righttriangle is %d:",areaoftriangle);

return 0;
}