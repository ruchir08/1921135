#include<stdio.h>
#include<string.h>
void main()
{
 char str1[30]="WEL",str2[30]="COME";
printf("\n First string is %s\n",str1);
printf("\n Second string is %s\n",str2);
strcat(str1,str2);
printf("First string after append up second one:%s\n",str1);
}
