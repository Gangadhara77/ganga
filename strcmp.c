#include<stdio.h>
main()
{
int i,flag=1;
char a[]="gangadhar";
char p[]="gangadhar";
for(i=0;a[i]!='\0'&&p[i]!='\0';i++)
{
if(a[i]!=p[i])
{
flag=0;
break;
}
}
if(a[i]=='\0'&&p[i]=='\0'&&flag==1)
{
printf("string equal");
}
else
{
printf("string not equal");
}
}
