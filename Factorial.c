#include<stdio.h>
int main()
{
	int a,i;
	printf("enter the number\n");
	scanf("%d",&a);
	for(i=a-1;i>0;i--)
	{
	a=a*i;
	}
	printf("%d",a);
	return 0;
}
