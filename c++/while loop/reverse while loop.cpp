#include<iostream>
using namespace std;
int main()
{
	int rev=0,no,rem;
	cout<<"Enter Number :";
	cin>>no;
	while(no>0){
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	
	}
	cout<<"The reverse is: "<<rev;
	return 0;
}
