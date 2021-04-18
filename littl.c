main()
{
int a=1;
char *p;
p=(char*)&a;
if(*p==1)
{
printf("little endian\n");
}
else
{
printf("big endian \n");
}
}
