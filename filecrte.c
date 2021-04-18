#include<stdio.h>
void main()
{
int inode;
inode=creat("kallu.txt",777);
if(inode==-1)
{
printf("file is fail");
}
else
{
printf("file is succ created");
}
}
