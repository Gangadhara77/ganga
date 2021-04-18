#include<stdio.h>
main()
{
char a[]="kallu";
int i,j,k;
i=0;
for(j=0;a[i]!=NULL;j++)
{
  if(a[j]==NULL)
   {
     for(k=j-1,i=0;i<k;i++,k--)
{
  
  char t=a[i];
    a[i]=a[k];
    a[k]=t;
}
i=j+1;
}
}
for(k=j-1,i;i<k;i++,k--)
{
   char t=a[i];
     a[i]=a[k];
      a[k]=t;
}
printf("\n %s",a);
}
