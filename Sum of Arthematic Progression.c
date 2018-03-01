#include <stdio.h>
int main()
{
	int a,d,f,i,sum=0;
	printf("Enter The series\n");
	scanf("%d",&a);
	printf("Enter The Number\n");
	scanf("%d",&d);
	printf("Enter The Number\n");
	scanf("%d",&f);
	for(i=0;i<a;i++)
	{
		sum=sum+f;
		f=f+d;
	}
printf("sum is:%d",sum);
}
