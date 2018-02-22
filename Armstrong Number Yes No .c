#include<stdio.h>
void main()
{
int a,n1,temp=0,c;
printf("Enter The Number\n");
scanf("%d",&a);
c=a;
while(a>0)
{
n1=a%10;
temp=temp+(n1*n1*n1);
a=a/10;
}
printf("%d",temp);
if(temp==c)
{
printf("Yes");
}
else
{
printf("No");
}
}
