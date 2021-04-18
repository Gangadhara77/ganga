#include<stdio.h>
main()
{
int a[5]={10,24,5,60,45};
int i,j,t;
for(i=0;i<5;i++)
{
for(j=0;j<4;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("array values after bubble sort\n");
for(i=0;i<5;i++)
printf("%d\n",a[i]);
}

