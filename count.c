#include<stdio.h>
int main()
{
int count=0;
long long num;
scanf("%lld",&num);
while( num!=0)
{
num=num/10;
++count;
}
printf("%d",count);
return 0;
}
