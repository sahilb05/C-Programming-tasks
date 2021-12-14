//To find the number is eve or odd
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	if(num % 2 ==0)
	printf("The number is Even",num);
	else
	printf("The number is Odd",num);
	return 0;
}
