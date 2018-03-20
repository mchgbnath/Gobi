#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter The Minutes\n");
scanf("%d",&a);
b=(a/60);
c=(a%60);
printf("%d Hours %d Minutes",b,c);
}
