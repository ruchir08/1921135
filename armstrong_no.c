#include<stdio.h>
int main(0
{
int n,temp,c;
int sum=0,digit;
printf("Enter any number");
scanf("%d",&n);
temp=n;
while(temp>0)
{
digit=temp%10;
temp/=10;
c=digit*digit*digit;            
sum=sum+c;
}
if(sum==temp)
printf("Armstrong");
else                                              
printf("Not armstrong");
return 0;
}
