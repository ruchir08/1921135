#include<stdio.h>
int main()
{
int code;
printf("enter weekday in number :");
scanf("%d", &code);
if (code==1)
printf("monday");
else if(code==2)
printf("Tuesday");
else if(code==3)                                                     
printf("Wednesday");
else if(code==4)
printf("Thursday");
else if(code==5)
printf("Friday");
else if (code==6)
printf("Saturday");                                 
else if(code==7)
printf("Sunday");
else
printf("Invaild output");
return 0;
}
                                                    
