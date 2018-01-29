#include<stdio.h>
#define MAX_SIZE 100
int main()
{
int i,k,n;
int arr[MAX_SIZE];
int sum=0;
printf("Enter the size of array");
scanf("%d",&n);
printf("enter the value of k");
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<k;i++)
{
sum=sum+arr[i];
}
return 0;
}
