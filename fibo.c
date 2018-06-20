#include<stdio.h>
void main()
{
int a=0;b=1,c,n;
scanf("%d",&n);
printf("1");
for(int i=0;i<n;i++){
c=a+b;
printf(" %d ",c);
a=b;
b=c;
}
}
