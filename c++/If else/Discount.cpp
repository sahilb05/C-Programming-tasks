//Discount
#include<iostream>
using namespace std;
int main()
{
int cost;
char user;
cout<<"Enter the cost price :";
cin>>cost;
cout<<"Is the user is student (Y/N) : ";
cin>>user;
if(cost>=500 && user=='Y')
cout<<"\nuser got 10%% discount";
else
cout<<"\nuser got 5%% discount";
if(cost>=500 && user=='N')
cout<<"\nuser got 8%% discount";
else
cout<<"\nuser got 2%% discount";
return 0;
}
