#include<stdio.h>
int main()
{
int start,end,i,j,k;
scanf("%d%d",&start,&end);
for(i=start;i<end;i++)
{
    k=0;
	for(j=2;j<=i/2;++j)
	{
		if(i%j==0)
		{
		k=1;
		break;
		}
	}
	if(k==0)
	{
	printf("%d\n",i);
	}
}
return 0;
}
