#include<iostream>
using namespace std;
int main()
{
	int arr[3][3],i,j;
	cout<<"\nEnter matrix data: ";
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"\nMatrix is: ";
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			cout<<arr[i][j];
		}
		cout<<"\n";
	}
	return 0;
		
}
