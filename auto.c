#include<stdio.h>
int func(void);
void main()
{
func();
}
int func(void)
{ int a=12;
if(1)
{
static int b=20;
printf("%d\n",b);
}
printf("%d",a);
}
