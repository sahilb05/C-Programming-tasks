//To fnt greatest number
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,n4,n5,max;
	cout<<"Enter the five numbers :";
	cin>>n1>>n2>>n3>>n4>>n5;
	max=n1;
	if(max<n2)
	max=n2;
	if(max<n3)
	max=n3;
	if(max<n4)
	max=n4;
	if(max<n5)
	max=n5;
	cout<<"The greatest number is :"<<max;
	return 0;
}
