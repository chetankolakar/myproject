#include<stdio.h>
void main()
{
    int a,b,i,temp;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
temp=i;
        }
    }
    printf("gcd of two number is %d",temp);
}
