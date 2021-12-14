#include<stdio.h>
int main()
{
	int rev=0,no,rem;
	printf("Enter Number :");
	scanf("%d",&no);
	while(no>0){
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	
	}
	printf("The reverse is: %d",rev);
	return 0;
}
