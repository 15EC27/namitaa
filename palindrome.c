#include<stdio.h>
int main()
{
int n,r,rn=0;
scanf("%d",&n);
while(n!=0)
{
r=n%10;
rn= (rn*10) + r;
n=n/10
}
if(n==rn)
   pritnf("Yes");
else
   pritnf("No");
return 0;
}
