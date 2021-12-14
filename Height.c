//TO convert Height in inches and centimeter
#include<stdio.h>
int main()
{
	float feet,inch,cm;
	printf("Enter the height (in feet)");
	scanf("%f",&feet);
	inch=feet*12;
	cm=inch*2,54;
	printf("\nValue in feet = %2f",feet);
	printf("\nValue in inches=%2f",inch);
	printf("\nValue in centemeter=%2f",cm);
	return 0;
	}

