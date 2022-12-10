#include<stdio.h>
int main()
{
    char chhichhore;
    scanf("%c",&chhichhore);
    if(chhichhore>='A'&&chhichhore<='Z')
    {
        printf("uppercase alphabet");
    }
    else if(chhichhore>='a'&&chhichhore<='z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}