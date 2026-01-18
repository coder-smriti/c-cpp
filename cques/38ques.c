#include<stdio.h>
int main()
{
    char ch;
    char vowel;
    char consonant;//use or sign
    printf("Enter the value of char:");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("char is vowel:%c\n",ch);
    }else{
        printf("char is consonant:%c",ch);
    }
 return 0;   
}