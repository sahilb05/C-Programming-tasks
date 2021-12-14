#include<stdio.h>
int main()
{
	int arr[100],i,n,sum=0;
	printf("ENter size of array : ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("\n%d",arr[i]);
		}
	}
	return 0;
}
