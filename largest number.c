#include<stdio.h>
int main()
{
int a,b,c,temp,l;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b)
  temp=a;
else temp=b;
if(temp>c)
  l=temp;
else l=c;
printf("%d",l);
return 0;
}
