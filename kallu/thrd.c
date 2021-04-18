#include<stdio.h>
#include<sys/types.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>
#include<stdlib.h>
#define pf printf
int i=0;
void* odd()
{
while(i<10)
{
if(i&1==1)
{
  pf("odd=%d\n",i);
i++;
}
}
}
void* even()
{
while(i<10)
{
if(i&1==0)
{
pf("even=%d\n",i);
i++;
}
}
}
int main()
{
int status;
pthread_t tr,tw;
pthread_create(&tr,NULL,odd,NULL);
pthread_create(&tw,NULL,even,NULL); 
pthread_join(tr,NULL);
pthread_join(tw,NULL);
return 0;
}


