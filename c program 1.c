// Interchange values of two numbers using third variable

#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("\nEnter the two values :");
	scanf("%d%d",&a,&b);
	printf("\nBefore interchange a=%d and b = %d,a,b");
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter interchange a = %d and b = %d,a,b");
	
	return 0;
}
