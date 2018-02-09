#include<stdio.h>
int main(void)
{
int a,i,flag=0;
printf("Enter The Number\n");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\n prime");
}
else
{
printf("\n not a prime number");
}
return 0;
}
