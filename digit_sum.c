#include<stdio.h>
int main()
{
int sum=0,digit;
int number,temp;
printf("enter any positive number:");
scanf("%d",&number);
temp=number;
while(temp>0)
{
digit=temp%10;
temp/=10;
sum+=digit;
}
printf("\n sum of digit of %d=%d\n",number,sum);
return 0;
}
                                                                     
