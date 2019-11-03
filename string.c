#include<stdio.h>
#include<string.h>
void main()
{
char str1[30],str2[30];
printf("\n First string is \n");
scanf("\n %s",str1);
printf("\n Second string is \n");
scanf("\n %s",str2);
strcpy(str1,str2);
printf("First string after copy second one:%s\n",str1);
}
