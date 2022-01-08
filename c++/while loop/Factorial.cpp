//TO find factorial  of any numbers
#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"Enter any Number :";
	cin>>n;
	while(n>0){
		fact*=n;
		n--;
	}
	cout<<"factorial is : "<<fact;
	return 0;
}
