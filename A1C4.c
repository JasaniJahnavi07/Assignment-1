#include <stdio.h>
int main()
{
float a,b,div;
printf("Enter two numbers:");
scanf("%f %f",&a,&b);
div = a/b;
printf("Division of %0.2f by %0.2f = %0.2f",a,b,div);
return 0;
}
