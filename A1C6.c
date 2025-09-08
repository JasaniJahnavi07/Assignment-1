#include <stdio.h>
int main()
{
    float hrs,min;
    printf("Enter time in hours:");
    scanf("%f",&hrs);
    min = 60*hrs;
    printf("Time in minutes = %0.2f",min);
    return 0;
}
