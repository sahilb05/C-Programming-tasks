//To find the Circumference of circle
#include<stdio.h>
#define PI 3.14
int main()
{
	float circumference,radius;
	printf("\nEnter the radius of circle :");
	scanf("%f",&radius);
	circumference= 2*PI*radius;
	printf("\nCircumference of the circle is : %2f");
	return 0;
	
	
}
