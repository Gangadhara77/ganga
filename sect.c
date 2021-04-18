main()
{
int a[5]={34,2,56,6,45};
int i,j,t;
for(i=0;i<4;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<5;i++)
printf("%d\n",a[i]);
}


