#include<stdio.h>
int main()
{
int n,p,i;
int power=1;
scanf("%d",&n);
scanf("%d",&p);
for(i=0;i<p;i++)
{
power = power * n;
}
printf("%d",power);
return 0;
}
