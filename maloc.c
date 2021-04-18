#include<stdio.h>
main()
{
int *p;
p=(int*)calloc(4,5);
if(p=NULL)
{
printf("memory allocation fail");
}
else
{
printf("memory allocation sucs");
}
}


