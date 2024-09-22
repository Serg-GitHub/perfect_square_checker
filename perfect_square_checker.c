#include <stdio.h>
#include <math.h> // To use sqrt function

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Declare variable sqrt_num and calculate it
    int sqrt_num = (int)sqrt(num);  // Put result of sqrt_num into num for comparison
    
    // Check if square of sqrt_num is equal to user integer input
    if (sqrt_num * sqrt_num == num);
}
