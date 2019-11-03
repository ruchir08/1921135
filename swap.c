#include<stdio.h>
void swap(int a,int b);
void main()
{
int x,y;
printf("\n Enter value of x:");                 //10
scanf("%d",&x);                                 //12
printf("\n Enter value of y:");
scanf("%d",&y);
printf("\n Befor calling swap funtion\n");
printf("\n value of x=%d , value of y=%d\n",x,y);
swap(x,y);
printf("\n After returning from swap function");
printf("\n value of x=%d , value of y=%d\n",x,y);
}
void swap(int a,int b)
{
int temp;                                           
printf("\n value of a=%d , value of b=%d before swap\n",a,b);
temp=a;
a=b;
b=temp;
printf("\n value of a=%d , value of b= %d after swap\n",a,b);
}
