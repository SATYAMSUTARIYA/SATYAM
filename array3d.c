#include<stdio.h>
int main()
{
     int i,j,a[5][5];
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            printf("enter the value of a : ");
            scanf("%d",&a[i][j]);
        }
}
		 for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            printf(" \t%d ",a[i][j]);
            
        }
 	printf("\n");
 }
}