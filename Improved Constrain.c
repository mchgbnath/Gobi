#include<stdio.h>
main()
{
int a[100],i,j,n=4,z=2,temp;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d",i);
}
for(j=0;j<z;j++)
if(a[i]<a[j])
a[i]=a[j];
{
temp=a[i];
a[j]=temp;
}
printf("%d",a[i]);
}
