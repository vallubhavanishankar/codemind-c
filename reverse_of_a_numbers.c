#include<stdio.h>
int main()
{
    int chhichhore,r,s=0;
    scanf("%d",&chhichhore);
    while(chhichhore!=0)
    {
        r=chhichhore%10;
        chhichhore=chhichhore/10;
        s=s*10+r;
    }
    printf("%d",s);
    
}