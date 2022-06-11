#include<stdio.h>
int main()
{
    int a[5],b[20],i,j,k;
    for(i=1;i<5;i++)
    {
      printf("enter a[%d] : ",i);
      scanf("%d",&a[i]);
    }
    printf("\n\n");
    for(j=0;j<5;j++)
    {
      printf("enter b[%d] : ",j);
      scanf("%d",&b[j]);
    }
    for(i=0,j=0;i<5;i++,j++)
    {
      k=a[i]+b[j];
      printf("\n value of a[%d] : %d \t\tvalue of b[%d] :%d \t total : %d ",i,a[i],j,b[j],k);
    }
}