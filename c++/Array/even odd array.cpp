#include<iostream>
using namespace std;
int main()
{
	int arr[6],i;
	cout<<"Enter six elements :";
	for(i=0;i<6;i++){
		cin>>arr[i];
	}
	cout<<"Even elements are :";
	for(i=0;i<6;i++){
		if(arr[i]%2==0)
		cout<<arr[i]<<endl;
	}
	cout<<"Odd elements are :";
	for(i=0;i<6;i++){
		if(arr[i]%2!=0)
		cout<<arr[i]<<endl;
	}
	return 0;
}
