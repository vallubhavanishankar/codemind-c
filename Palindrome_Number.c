#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int a,r,q,s=0;
        scanf("%d",&a);
        q=a;
        while(q!=0)
        {
            r=q%10;
            q=q/10;
            s=s*10+r;
        }
        if(s==a)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}