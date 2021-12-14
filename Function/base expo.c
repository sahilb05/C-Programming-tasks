#include<stdio.h>
#include<math.h>
int main()
{
double base,expo,power;
printf("ENter base :");
scanf("%lf",&base);
printf("Enter exponent:");
scanf("%lf",&expo);
/*Calculate base^expo*/
power=pow(base,expo);
printf("%.2lf^%.2lf=%.2lf",base,expo,power);
return 0;
}
