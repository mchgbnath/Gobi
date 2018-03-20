#include<stdio.h>
void main()
{
char a[10],i;
printf("Enter a String\n");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>'a')&&(a[i]<'z'))
{
printf("No Numeric");

}
else
{
    printf("%c\n",a[i]);
}
}}
