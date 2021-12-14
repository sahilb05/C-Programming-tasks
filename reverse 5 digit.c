//To print reverse of 5 digit numbers
#include<stdio.h>
int main()
{
	int num,a,b,c,d,e,reverse;
	printf("\nEnter any five digit numbers :");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	d=num%10;
	num=num/10;
	e=num;
	printf("The reverse of five digit numbers : %d",reverse);
	return 0;
}
