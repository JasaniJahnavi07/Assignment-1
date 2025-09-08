#include <stdio.h>
int main(){
    float hrs,min;
    printf("Enter time in minutes:");
    scanf("%f",&min);
    hrs = min/60;
    printf("Time in hours = %0.2f",hrs);
    return 0;
}
