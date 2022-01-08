//to find the number is positive,negative or zero
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\nEnter any number=";
	cin>>n;
	if(n>0)
	cout<<"\n  is positive"<<n;
	if(n<0)
	cout<<"\n is negative"<<n;
	if(n==0)
	cout<<"\n  is zero"<<n;
    return 0;	
}
