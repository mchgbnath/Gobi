
#include<stdio.h>
int main()
{
int n,a,b,i,count;
printf("enter the two limits\n");
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
count=0;
for(n=2;n<i;n++)
{
if(i%n==0)
count++;
}
if(count==0)
printf("The Prime Numbers Are %d\n",i);
}
}
