//TO find multiplication  of any numbers
#include<stdio.h>
int main()
{
	int num,mul=1,rem;
	printf("Enter any Numbers :");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		mul*=rem;
		num/=10;
	}
	printf("mul is : %d",mul);
	return 0;
}
