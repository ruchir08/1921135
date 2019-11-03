#include<stdio.h>
#include<string.h>
struct employee
{
int code;
char name[25];
char department[25];
float salary;
};
void main()
{                                                   
struct employee aemployee;
printf("Enter Employee's code:");
scanf("%d",&aemployee.code);
printf("Enter Employee's name:");
scanf("%s",aemployee.name);
printf("Enter Employee's department:");
scanf("%s",aemployee.department);                   
printf("Enter employee's salary:");
scanf("%f",&aemployee.salary);
printf("\n\n Particulars of employee are:");
printf("\n Employee's code:%d",aemployee.code);
printf("\n Employee's name:%s",aemployee.name);
printf("\n Employee's department:%s",aemployee.department);
printf("\n Employee's salary:%f\n",aemployee.salary);
}
