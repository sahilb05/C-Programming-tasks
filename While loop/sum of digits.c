//TO print sum of digits of any numbers
#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("Enter any Numbers :");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("Sum is : %d",sum);
	return 0;
}
