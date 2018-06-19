#include<stdio.h>
void main()
{
int n,sum=0,t,b;
scanf("%d",&n);
b=n;
while(n>0){
t=n%10;
sum=sum+(t*t*t);
n=n/10;
}
if(sum==b)
printf("yes");
else
printf("no");
}
