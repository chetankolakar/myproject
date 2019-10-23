#include<stdio.h>
#include<stdlib.h>
main()
{
int n,a=0,b=1;
  printf("enter the number\n");
  scanf("%d",&n);
printf("%d\n",a);
printf("%d\n",b);
int c;
for(int i=2;i<n;i++)
{
   c=a+b;
   a=b;
   b=c;
printf("%d\n",c);
}
}
