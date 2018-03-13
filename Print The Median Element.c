
#include<stdio.h>
int main()
{
	int z[10],i,j,n,temp;
	printf("enter the number");
	scanf("%d",&n);
	printf("list of element");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&z[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(z[i]>z[j])
	        {
	        temp=z[i];
	        z[i]=z[j];
	        z[j]=temp;
	        }
	}
	}
	printf("sorted list \n");
	for(i=0;i<n;i++)
	{
	    printf("%d\n",z[i]);
	}
	printf("median number is:");
	printf("%d\n",z[n/2]);
	return 0;
}
