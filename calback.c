#include<stdio.h>
int sum(int,int);
main()
{
int(*p);
int a=10;
int b=20;
p=sum;
int result=sum(a,b);
printf("%d\n",result);
}
int sum(int a,int b)
{
int c=a+b;
return c;
}
