#include<stdio.h>
main()
{
char *p;
p=(char*)malloc(10);
strcpy(p,"kallu");
p=(char*)realloc(p,20);
printf("%s\n",p);
}
