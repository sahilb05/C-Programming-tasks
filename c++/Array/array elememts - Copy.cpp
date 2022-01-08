#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	cout<<"Enter array elements: ";
	for(i=0;i<=4;i++){
		cin>>arr[i];
	}
	cout<<"\nArray elements are: ";
	for(i=0;i<=4;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
