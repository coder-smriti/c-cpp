#include<stdio.h>
int main()
{
    int len;
    int brea;
    int volcuboid;
    int surfcuboid;
    printf("Enter the value of len,brea:");
    scanf("%d%d",&len,&brea);
    volcuboid=len*brea;
    surfcuboid=2*(len*brea);
    printf("volofcuboid:%d,surfofcboid:%d",volcuboid,surfcuboid);
    return 0;
}