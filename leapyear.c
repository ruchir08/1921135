#include<stdio.h>
int main()
{
int year;
printf("Enter the value of year");
scanf("%d",&year);
if (year%4==0)
printf("the year is Leap \n");
else
printf("\n The year is not Leap \n");
return 0;
}
