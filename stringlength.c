#include<stdio.h>
#include<string.h>
void main()
{
 char str[20];
 int len;
 printf("\n Enter a string of length<=19");
 gets(str);
 len=strlen(str);
 printf(" Number of character in %s=%d\n",str,len);
}
