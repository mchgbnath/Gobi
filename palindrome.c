#include<stdio.h>
void main()
{
    int z,b,c,d,e;
    printf("Enter the Number\n");
    scanf("%d",&z);
    b=(z/100);
    c=(z-(b*100))/10;
    d=z-((b*100)+(c*10));
    e=(d*100)+(c*10)+b;
    if(z==e)
    printf("The Number Is Palindrome\n");
    else
    printf("Not a palindrome");
}
