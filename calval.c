#include<stdio.h>
int swap(int*,int*);
void main()
{
int a=30;
int b=20;
swap(&a,&b);
printf("a=%d,b=%d\n",a,b);
}
int swap(int *x,int *y)
{
int z=*x;
*x=*y;
*y=z;
printf("x=%d,y=%d\n",*x,*y);
}
