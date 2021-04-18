/*int main()
{
int sum=0,a=0,b=1,n;
scanf("%d",&n);
while(sum<=n)
{
printf("%d",sum);
a=b;
b=sum;
sum=a+b;
}
return 0;
}*/
void main()
{
int a=0,b=1,range,sum,i;
scanf("%d",&range);
for(i=1;i<range-1;i++)
{
sum=a+b;
printf("%d",sum);
a=b;
b=sum;
}
}
