#include <stdio.h>
#include <math.h> // To use sqrt function

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    /* Declare variable sqrt_num and calculate it
    Put result of sqrt_num into num for comparison */
    int sqrt_num = (int)sqrt(num); 

    // Check if square of sqrt_num is equal to user integer input
    if (sqrt_num * sqrt_num == num)
        ;
    {
        printf("%d is a perfect square.\n", num);
    }
    else
    {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
