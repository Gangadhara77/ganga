#include<stdio.h>
main()
{
char a[]="kallu";
int i,j;
for(i=0,j=strlen(a)-1;i<j;i++,j--)
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
printf("%s\n",a);
}
