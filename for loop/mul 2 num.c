#include<stdio.h>
int main()
{
	int a,b,i;
	int result=0;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		result=result+a;
	}
	printf("%d",result);
	return 0;
}
