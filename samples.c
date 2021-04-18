#include<stdio.h>
void main()
{
/*char a[]="kallu";
printf("%d\n",sizeof(a));
printf("%d\n",strlen(a));//without usig strlen fun
int i,ch=0;
for(i=0;a[i]!='\0';i++)
{
ch++;
}
printf("%d\n",ch);
}*/
int *p;
int **p1;
int a=20;
p=&a;
//p1=&p;
printf("%d\n",*p);
//printf("%d\n",**p1);
printf("%d\n",sizeof(p1));
}
