#include<stdio.h>
#define init  int a=10,b=20;
int swap(int*,int*);
void main()
{
init;
swap(&a,&b);
printf("%d,%d",a,b);
}
int swap(int*x,int*y)
{
int z=*x;
*x=*y;
*y=z;
printf("\n%d,%d\n",*x,*y);
printf("\n%u,%u\n",**x,**y);
}

