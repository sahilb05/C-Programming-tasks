#include<stdio.h>
int main()
{
	int n,x=0,y=1,z,i;
	printf("Enter any range :");
	scanf("%d",&n);
	printf("%4d%4d",x,y);
	for(i=3;i<=n;i++)
	{
		z=x+y;
		printf("%4d",z);
		x=y;
		y=z;
	}
	return 0;
}
