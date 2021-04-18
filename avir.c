#include<stdio.h>
void main()
{
int i;
char a[]="ravi";
char ch;
ch=a[0];
for(i=1;a[i]!='\0';i++)
{
a[i-1]=a[i];
}
a[i-1]=ch;
printf("%s\n",a);
}
