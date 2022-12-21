#include<stdio.h>
int main()
{
    int n,r,s=0,sq,a;
    scanf("%d",&n);
    sq=n*n;
    a=sq;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        s=s+r;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}