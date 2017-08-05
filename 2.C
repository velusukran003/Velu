#include <stdio.h>
int main()
{
    int c;
    printf("Enter c: ");
    scanf("%d", &c);
    /* logic */
    
    if (c% 2 == 0) {
    	printf("The given number is EVEN");
    }
    else {
    	printf("The given number is ODD");
    }
    return 0;
}
