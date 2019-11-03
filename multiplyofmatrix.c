#include<stdio.h>
void main()
{       
int a[10][10],b[10][10],c[10][10];
int m,n,o,p,i,j,k;
printf("Enter size of matrix A as m,n:");
scanf("%d %d",&m,&n);
printf("Enter size of matrix B as o,p:");
scanf("%d %d",&o,&p);
//column of first matrix should be equal to column of second matrix
while(n != o)
{
  printf("Error! column of first matrix is not equal to row of second matrix:");
  printf("Again enter size of matrix A as m,n:");
  scanf("%d %d",&m,&n);
  printf("Again enter size of matrix B as o,p:");
  scanf("%d %d",&o,&p);
}                                                   
//storing element of first matrix
printf("\n Enter element of matrix a row wise\n",m*n);
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
     printf("Enter element of a%d%d:",i,j);         
     scanf("%d",&a[i][j]);
  }
}
//storing element of second matrix
printf("\n Enter element of matrix b row wise\n",o*p);
for(i=0;i<o;i++)
{
   for(j=0;j<p;j++)
  {
  printf("Enter element of b%d%d:",i,j);
  scanf("%d",&b[i][j]);
  }
}    
//initializing all elements of C matrix to 0
for(i=0;i<m;i++)
{ 
  for(j=0;j<p;j++)
  {
      c[i][j]=0;
  }
}
//Multiplying matrices a and b and
//storing result in C matrix
for(i=0;i<m;i++)
{    
  for(j=0;j<p;j++)
  {
     for(k=0;k<n;k++)
     {
         c[i][j]+=a[i][j]*b[i][j];
     }
  }
}
//Displaying the C matrix
printf("\nOutput matrix C is\n:");
for(i=0;i<m;i++)
{
  for(j=0;j<p;j++)
  { 
     printf("%d ",c[i][j]);
     if(j==p-1)
     printf("\n\n");
  }
}  
}    
         
