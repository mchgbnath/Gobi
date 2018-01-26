
#include <stdio.h>
int main()
{
    int x, B, C;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &x, &B, &C);

    if( x>=B && x>=C )
        printf("%d is the largest number.", x);

    if( B>=x && B>=C )
        printf("%d is the largest number.", B);

    if( C>=x && C>=B )
        printf("%d is the largest number.", C);
}
