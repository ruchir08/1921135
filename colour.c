#include<stdio.h>
int main()
{
char code;
printf("enter color code:");
scanf("%c",&code);
switch(code)
{
case 'y':
printf("yellow colour");
break;
case 'r':
printf("Red colour");
break;
case 'b':
printf("Blue colour");
break;
default:
printf("Wrong colour");
}
return 0;
}
