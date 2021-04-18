#include<stdio.h>
main()
{
struct student
{
int roll;
char name;
};
struct student a[5];
{
int i;
for(i=0;i<5;i++)
{
scanf("%d",&a[i].roll);
scanf("%c",&a[i].name);
}
for(i=0;i<5;i++)
{
printf("\n%d\n",a[i].roll);
printf("\n%c\n",a[i].name);
}
}
}


