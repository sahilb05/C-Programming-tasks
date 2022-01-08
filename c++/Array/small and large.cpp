#include<iostream>
using namespace std;
int main()
{
	int arr[10]={2,3,5,66,8,4,99,55,76,11};
	int small,large,i;
	small=large=arr[0];
	for(i=1;i<10;i++){
		if(arr[i]<small)
		small=arr[i];
		if(arr[i]>large)
		large=arr[i];
	}
	cout<<"Small no is :"<<small<<" and Large no is :"<<large;
	return 0;
}
