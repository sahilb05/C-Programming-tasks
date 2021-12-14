//To perform Arithmatic operations
#include<stdio.h>
int main()
{
	int num1,num2;
	int sum,sub,mul,div,quo;
	printf("ENter two numbers :");
	scanf("%d%d",&num1,&num2);
	sum = num1+num2;
	sub = num1-num2;
	mul = num1*num2;
	div = num1%num2;
	quo = num1/num2;
	printf("\nThe sum is :%d",sum);
	printf("\nThe sub is :%d",sub);
	printf("\nThe mul is :%d",mul);
	printf("\nThe div is :%d",div);
	printf("\nThe quo is :%d",quo);
	return 0;
}
