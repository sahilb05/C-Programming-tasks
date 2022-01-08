#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n;
	cout<<"ENter size of array : ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			cout<<"\n"<<arr[i];
		}
	}
	return 0;
}
