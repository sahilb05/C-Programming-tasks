#include<stdio.h>
int main()
{
	int sum=0,i;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		sum+=1;
	}
	printf("Sum of even number is %d",sum);
	return 0;
}
