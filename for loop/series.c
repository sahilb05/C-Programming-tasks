#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,x,n;
	float sum=1;
	printf("Enter number of series and value :");
	scanf("%d%d",&n,&x);
	for(i=2;i<=n;i++)
	{
		sum+=(float)pow(x,i)/i;
	}
	printf("Sum = %d",sum);
	return 0;
}
