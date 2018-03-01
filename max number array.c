#include<stdio.h>
void main()
{
	int z,b,max=0,gcd=0,i;
	printf("ENTER THE TWO INTEGERS :\n");
	scanf("%d%d",&z,&b);
	if(z>b)
	{
		max=z;
	}
	else
	{
		max=b;
	}
	for(i=2;i<max;i++)
	{
		if(((z%i)==0)&&((b%i)==0))
		{
			gcd=i;
		}
	}
	printf("THE HCF FOR %d AND %d IS %d",z,b,gcd);
}
