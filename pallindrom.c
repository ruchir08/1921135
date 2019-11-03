#include<stdio.h>
int main()
{
int sum=0,digit;
int number,temp;
printf("\n Enter any positive integer no:");
scanf("%d",&number);
temp=number;
while(temp>0)
{    
digit=temp%10;
temp/=10;
sum=sum*10+digit;
}  
if(number==sum)
printf("\n %d is a pallindrome number\n",number);
else 
printf("\n %d is not a pallindrome number\n",number);
return 0;
}
 
