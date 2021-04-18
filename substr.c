#include<stdio.h>
#include<string.h>
main()
{
char a[]="xajxyz";
char b[]="xyz";
char c[]="abc";
int i,j=0,flag=0,cnt=0;
int match=strlen(b);
for(i=0;a[i]!='\0';i++)
{
if(b[j]!='\0')
{
if(a[i]==b[j])
{
j++;
cnt++;
if(match==cnt)
{
flag=1;
break;
}
}
else
{
if(cnt)
{
j=0;
cnt=0;
i--;
}
j=0;
cnt=0;
}
}
}
if(flag)
{
printf("sub str");
int k=match;
for(k,j=0;k<=i;k++,j++)
{
a[k]=c[j];
}
printf("\n%s",a);
}
}
