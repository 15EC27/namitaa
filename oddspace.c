#include<stdio.h>
int main()
{
int a,b;
scanf("%d",&a);
scanf("%d",&b);
for(i=a;i<=b;i++)
{
if((i%2)!=0 || (i/1)!=1)
  {
  printf("%d",i);
  }
}
return 0;
}