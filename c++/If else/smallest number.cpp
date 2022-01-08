//To find the Smallest number
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,n4,n5,small;
	cout<<"Enter the five numbers :";
	cin>>n1>>n2>>n3>>n4>>n5;
	small=n1;
	if(small>n2)
	small=n2;
	if(small>n3)
	small=n3;
	if(small>n4)
	small=n4;
	if(small>n5)
	small=n5;
	cout<<"The smallest number is :"<<small;
	return 0;
}
