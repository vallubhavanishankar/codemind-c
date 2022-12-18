#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,per;
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    per=((sub1+sub2+sub3+sub4+sub5)*100)/500.0;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}