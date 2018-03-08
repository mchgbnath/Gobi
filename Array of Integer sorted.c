#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,z[15],temp;
    clrscr();
    printf("Enter the array size\t");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&z[i]);
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
    for(i=0;i<n;i++)
    {
    printf("%d",z[i]);
    }
    getch();
}
