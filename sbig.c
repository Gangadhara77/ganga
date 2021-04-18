#include<stdio.h>
void main()
{
int a[]={1,10,3,67,80,9,2,67};
int i;
int big=a[0];
int sbig=0;
for(i=1;i<8;i++)
{
if(big<a[i])
{
sbig=big;
big=a[i];
}
else
{
if(sbig<a[i])
{
sbig=a[i];
}
}
}
printf("%d \n",sbig);
}
