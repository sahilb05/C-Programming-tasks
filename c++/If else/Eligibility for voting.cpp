//voting eligibility
#include<iostream>
using namespace std;
int main()
{
int age;
char voter_id;
cout<<"Enter the age :";
cin>>age;
cout<<"Enter voter id(y/n):";
cin>>voter_id;
if(age<=18 && voter_id=='y')
 cout<<"\nPerson is eligible";	
else
cout<<"\nPerson is not eligible";
return 0;	
}
