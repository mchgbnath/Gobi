#include <stdio.h>
void main()
{
  int n1, n2, z, temp, num, rem;
  printf("Enter Two Numbers\n");
  scanf("%d %d", &n1, &n2);
  printf("Armstrong numbers between %d & %d are: ", n1, n2);
  for(z=n1+1; z<n2; ++z)
  {
      temp=z;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(z==num)
      {
          printf("%d ",z);
      }
  }
  return 0;
}
