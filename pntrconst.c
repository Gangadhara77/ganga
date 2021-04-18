#include"stdio.h"
void main()
{
int a=10,b=20;
const int *const p=&a;
//p=&b;
//(*p)++;
printf("%d\n",*p);
}
