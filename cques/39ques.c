#include<stdio.h>
int main()
{
  int x,y,z;
  printf("Enter the value of x,y,z:");
  scanf("%d%d%d",&x,&y,&z);
  if(x>y && x>z)
  {
    printf("The greater number is x:%d\n",x);
  }
  else if(y>x && y>z)
  {
    printf("The greates number is y:%d\n",y);
  } else { 
  printf("The greatest number is z:%d",z);
  }

}