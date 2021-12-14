//TO find factorial  of any numbers
#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("Enter any Numbers :");
	scanf("%d",&n);
	while(n>0){
		fact*=n;
		n--;
	}
	printf("factorial is : %d",fact);
	return 0;
}
