//TO find the voume of Cylinder
#include<stdio.h>
#define PI 3.14
int main()
{
float r,h,volume;
printf("Enter Radius and Height of the Cylinder\n");
scanf("%f%f",&r,&h);
volume = PI*r*r*h;
printf("Volume of Cylinder is %f\n",volume);
return 0;
}
