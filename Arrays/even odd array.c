#include<stdio.h>
int main()
{
	int arr[10],i,even=0,odd=0;
	for(i=0;i<10;i++){
		printf("Enter the values arr[%d] :",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("Even=%d, Odd=%d",even,odd);
	return 0;
	
}
