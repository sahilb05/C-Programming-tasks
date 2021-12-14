#include<stdio.h>
int main()
{
	int arr[3][3],i,j,sum=0;
	printf("\nEnter matrix data: ");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nMatrix is: \n");
	for(i=0;i<3;++i)
	{   
	     sum=0;
		for(j=0;j<3;++j)
		{
			printf("%d\t",arr[i][j]);
			sum=sum+arr[i][j];
		}
		printf("---->%d",sum);
		printf("\n");
	}
	return 0;
		
}
