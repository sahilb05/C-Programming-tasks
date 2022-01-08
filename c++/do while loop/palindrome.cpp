#include<iostream>
using namespace std;
int main()
{
	int num,nsave,rem,rev=0;
	cout<<"Enter any Number :";
	cin>>num;
	nsave=num;
	do
	{
		rem=num%10;
		num/=10;
		rev=rev*10+rem;
	}while(num>0);
	if(nsave==rev)
	cout<<nsave<<" is palindrome number";
	else
	cout<<nsave<<" is not palindrome number";
	return 0;
	
}
