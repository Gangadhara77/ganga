void main()
{
int *p;
p=(int*)malloc(10);
if(p==NULL)
{
printf("\n memo alloc is fail\n");
}
else
{
printf("\n memo alloc is succ\n");
}
}
