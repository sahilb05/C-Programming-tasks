#include<iostream>
using namespace std;
int main()
{
	int rev=0,no,rem,nsave;
	cout<<"Enter number : ";
	cin>>no;
	nsave=no;
	do
	{
		rem=no%10;
		rev=rev+rem*rem*rem;
		no=no/10;
	}while(no>0);
	if(nsave==rev)
	  cout<<nsave<<" is armstrong";
	  else
	  cout<<nsave<<" is not armstrong";
	  return 0;
	
}
