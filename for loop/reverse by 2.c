#include<stdio.h>
int main()
{
	int k,n;
	printf("Enter any number :");
	scanf("%d",&n);
	for(k=n;k>=1;k-=2)
	{
		printf("%d\t",k);
	}
	return 0;	
	
}
