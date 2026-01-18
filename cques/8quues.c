#include<stdio.h>
int main()
{
    int l;
    int vol;
    int surfcube;
    printf("Enter the l:");
    scanf("%d",&l);
    vol=l*l*l;
    surfcube=6*l*l;
    printf("vol:%d,sufcube:%d",vol,surfcube);
    return 0;
}