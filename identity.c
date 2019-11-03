#include<stdio.h>
int main()
{
int i,j,m,n;
m=n;
printf("The size of identity matrix A as m,n:");
scanf("%d %d",&m,&n);
printf("Identity matrix =\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
printf("%d ",1);
else
printf("%d ",0);
}
printf("\n");
}
}
