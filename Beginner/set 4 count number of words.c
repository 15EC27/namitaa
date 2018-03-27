#include<stdio.h>
#include<string.h>
void main()
{
int count=0,i,l;
char string[20];
scanf("%[^\n]s",string);
l=strlen(string);
for(i=0;i<=l;i++)
{
if(string[i]==' ')
{
count++;
}
}
printf("%d",count+1);
}
