#include<stdio.h>
#include<conio.h>
void main()
{
int g,b,i;
{
printf("Enter the Starting Value\n");
scanf("%d",&g);
printf("Enter the Ending Limit\n");
scanf("%d",&b);
for(i=g;i<b;i++)
{
if((g%2)==0)
printf("The odd values are%d",i);
}
}
}


