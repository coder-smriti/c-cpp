//Average of three numbers
#include<stdio.h>
int main()
{
    float  a, b, c;
    float average;
    printf("Enter three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    average=(a+b+c)/3.0;
    printf("average of three numbers:%f",average); 
    return 0;

}
    