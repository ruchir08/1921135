#include<stdio.h>
int main()
{
int sum_even=0,sum_odd=0,number;
number=1;
while(number<=100)
{
if(number%2==0)
{                                                   
sum_even+=number;
number++;
printf("sum of first 100 even no:%d\n",sum_even);
}
else
{
sum_odd+=number;                                    
number++;
printf("sum of first 100 odd number:%d\n",sum_odd);
}
}
return 0;
}
                                                    
