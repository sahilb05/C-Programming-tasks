#include<stdio.h>
int main()
{
	int arr[5],i;
	printf("Enter array elements: ");
	for(i=0;i<=4;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nArray elements are: ");
	for(i=0;i<=4;i++){
		printf("\n%d",arr[i]);
	}
	return 0;
}
