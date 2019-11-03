#include<stdio.h>
void main()                                      
{
int a[10][10],b[10][10],c[10][10];
int n,m,i,j;
printf("Enter size of matrix A as m,n:");
scanf("%d %d",&m,&n);
printf("\n Enter element of matrix A row wise\n",m*n);
for(i=0;i<m;i++)                                    
{
 for(j=0;j<n;j++)
 {
 scanf("%d",&a[i][j]);
 }
}
printf("Enter size of B as m,n:");                  
scanf("%d %d",&m,&n);
printf("\n Enter element of matrix B row wise\n",m*n);
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
scanf("%d",&b[i][j]);
 }
}                                                   
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
 c[i][j]=a[i][j]+b[i][j];
 }
 }
printf("The sum of two matrices is:");
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
 printf("%d \n",c[i][j]);
 }
printf("\n");
}                                                   
}

 
