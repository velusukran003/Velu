#include <stdio.h>
int main()
{
    int l1, l2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &l1, &l2);

    for(i=1; i <= l1 && i <= l2; ++i)
    {
        // Checks if i is factor of both integers
        if(l1%i==0 && l2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", l1, l2, gcd);

    return 0;
}
