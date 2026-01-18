#include<stdio.h>
int main()
{
    float pi=3.14;
    float radi;
    float cirum;
    float area;
    printf("Enter the value of radi:");
    scanf("%f",&radi);
    cirum=2*pi*radi;
    printf("cirum of circle:%f",cirum);
    area=pi*radi*radi;
    printf("area of circle:%f",area);

  return 0;  
}