#include <stdio.h>
int main()
{
float a,b,sum,diff,mul,div;
printf("Enter two numbers:");
scanf("%f %f",&a,&b);
sum = a + b;
if(a>b){
diff = a - b;}
else{
diff = b - a;
}
mul = a*b;
div = a/b;
printf("Sum of %0.2f and %0.2f = %0.2f\n",a,b,sum);
printf("Difference of %0.2f and %0.2f = %0.2f\n",a,b,diff);
printf("Product of %0.2f and %0.2f = %0.2f\n",a,b,mul);
printf("Division of %0.2f and %0.2f = %0.2f\n",a,b,div);
return 0;
}
