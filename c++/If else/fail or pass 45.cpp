//45 fail or pass c++
#include<iostream>
using namespace std;
int main()
{
	int p1,p2,p3;
	cout<<"\nEnter 3 subjects marks :";
	cin>>p1>>p2>>p3;
	if(p1<45 || p2<45 || p3<45)
	cout<<"fail";
	else
	cout<<"pass";
	return 0;
}
