#include<stdio.h>
int main()
{
int *p;
int a;
p=&a;
*p=40;
printf("%d",a);
return 0;
}
