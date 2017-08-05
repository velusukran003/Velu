#include<stdio.h>
int main()
{
    double no;

    printf("Enter a no: ");
    scanf("%lf", &no);

    if (no <= 0.0)
    {
        if (no == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative no.");
    }
    else
        printf("You entered a positive no.");
    return 0;
}
