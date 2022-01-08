#include<iostream>
using namespace std;
int main()
{
	int arr[3][3],i,j,sum=0;
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
	     sum=0;
		for(j=0;j<3;++j)
		{
			cout<<"\t"<<arr[i][j];
			sum=sum+arr[i][j];
		}
		cout<<"---->"<<sum;
		cout<<"\n";
	}
	return 0;
		
}
