#include<stdio.h>
int main()
{
char c;
scanf("%d",&c);
if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
   printf("Alphabet");
else
   printf("Not a alphabet)
return 0;
}