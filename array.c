#include<stdio.h>
int main()
{
    int a[5],b[20],i,j;
    for(i=1;i<5;i++)
    {
      printf("enter a[%d] : ",i);
      scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
      printf("\n%d",i,a[i]);
    }
}