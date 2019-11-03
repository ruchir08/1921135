#include<stdio.h>
int main()
{
int array[100],i,n,search;
printf("\n Enter size of array\n");
scanf("%d",&n);
printf("Enter the element of array \n");
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("\n Enter the number to be search\n");
scanf("%d",&search);                                
for(i=0;i<n;i++)
{
if(array[i]==search)
printf("Search is successful\n");
else
printf("Search is unsuccessful\n");
}                                                   
return 0;
} 




       
