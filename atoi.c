#include<stdio.h>
main()
{
char a[]="kallu";
int i,result=0;
for(i=0;a[i]!='\0';i++)
{
result=result*10+a[i]-48;
}
printf("result=%d\n",result);
}
