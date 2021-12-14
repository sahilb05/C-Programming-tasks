#include<stdio.h>
int main()
{
	int num,nsave,rem,rev=0;
	printf("Enter any Number :");
	scanf("%d",&num);
	nsave=num;
	do
	{
		rem=num%10;
		num/=10;
		rev=rev*10+rem;
	}while(num>0);
	if(nsave==rev)
	printf("%d is palindrome number",nsave);
	else
	printf("%d is not palindrome number",nsave);
	return 0;
	
}
