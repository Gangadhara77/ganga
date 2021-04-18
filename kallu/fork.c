#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#define pf printf
main()
{
int id;
id=fork();
if(id==0)
{
  pf("child\n");
}
else
{
pf("parent\n");
}
}
