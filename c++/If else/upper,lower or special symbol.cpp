#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"ENter any character :";
	cin>>ch;
	if(ch>=65 && ch<=90)
	cout<<"\n %c is upper case";
	else if(ch>=97 && ch<=122)
	cout<<"\n %c is lower case";
	else if(ch>=48 && ch<=57)
	cout<<"\n %c is Digit";
	else 
	cout<<"\n %c is special symbol";
	return 0;
	
}
