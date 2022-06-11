#include<stdio.h>
int main()
{
int i,n=0;
printf("enter the value :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
printf("\n%d",i*i);
}
else
{
printf("\n%d",i);
}
}
}