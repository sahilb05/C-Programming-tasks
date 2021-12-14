//C program to interchange two values without using third variable
#include<stdio.h>
int main()
{
	int a=10,b=20;
	printf("\nbefore interchange a=%d,b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter interchange a=%d,b=%d",a,b);
	return 0;
	
}
