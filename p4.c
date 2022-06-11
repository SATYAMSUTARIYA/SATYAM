#include<stdio.h>
int main()
{
   printf("all element total \n");
   int i,a[10],n=0;
   for(i=0;i<=9;i++)
   {
       printf("enter the value of a[%d] : ",i);
       scanf("%d",&a[i]);
   }
   for(i=0;i<=9;i++)
   {
    if(a[i]%1==0)
    {
      printf("\n a[%d] : %d ",i,a[i]);
      n+=a[i];
    }
   }

printf("\n total : %d",n);
}