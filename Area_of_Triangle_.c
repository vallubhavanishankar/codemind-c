#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,p;
    scanf("%f%f%f",&a,&b,&c);
    p=(a+b+c)/2;
    float area;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%0.2f",area);
}