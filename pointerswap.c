#include<stdio.h>
void swap(int*a,int*b);
void main()
{
int x,y;
printf("\n Enter value of x:");
scanf("%d",&x);
printf("\n Enter value of y:");
scanf("%d",&y);
printf("\n Before calling swap function\n");
printf("\n Value of x = %d ,value of y = %d\n",x,y);
swap(&x,&y);
printf("\n after returning from swap function\n");
printf("\n Value of x = %d,value of y = %d\n",x,y);
}
void swap(int*a,int*b)
{
int temp;                                           
printf("\n Inside the function\n");
printf("\n Value of a = %d,value of b = %d before swap\n",*a,*b);
temp=*a;
*a=*b;
*b=temp;
printf("\n Value of *a = %d,value of *b = %d after swap\n",*a,*b);
} 
