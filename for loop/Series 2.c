#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,x,n,fact=1;
	float sum=1;
	printf("Enter number of series and value :");
	scanf("%d%d",&n,&x);
	for(i=2;i<=n;i++)
	{
		j=i;
		fact=1;
		while(j>0){
			fact*=j;
			--j;
		}
		sum+=(float)pow(x,i)/fact;
	}
	printf("Sum = %d",sum);
	return 0;
}
