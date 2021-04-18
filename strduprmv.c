#include<stdio.h>
void main()
{
int i,j,k;
char s[]="abaacb";
for(i=0;s[i]!='\0';i++)
{
for(j=i+1;s[j]!='\0';j++)
{
if(s[i]==s[j])
{
for(k=j;s[k]!='\0';k++)
{
s[k]=s[k+1];
}
j--;
}
}
}
printf("remove dup=%s\n",s);
}
