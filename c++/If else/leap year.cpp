#include<iostream>
using namespace std;

int main()
{
int year;
cout<<"Enter any Year";
cin>>year;

if(year%100!=0){
                if(year%4==0)
                cout<< "is leap year.\n"<<year;
                else
                cout<<"is nt leap year.\n"<<year;
                }
else{
                if(year%400==0)
                cout<<" is leap year.\n"<<year;
                else
                cout<<"\n is not leap year"<<year;
	}
return 0;
	
}
