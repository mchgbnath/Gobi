
#include <stdio.h>

int main(void) {
	int z,i,temp;
	scanf("%d",&z);
	int a[z];
	for(i=0;i<z;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<z;i++)
	{
		
		
			if(a[i]<a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
			
		
	
	}
	printf("%d",a[i-1]);
	return 0;
}
