#include <stdio.h>
int main()
{
    int c;
    printf("Enter e: ");
    scanf("%d", &e);
    /* logic */
    
    if (e% 2 == 0)
    {
    	printf("The given number is EVEN");
    }
    else {
    	printf("The given number is ODD");
    }
    return 0;
}
