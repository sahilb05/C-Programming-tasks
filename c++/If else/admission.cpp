// gender ,can take admission or not.

#include<iostream>
using namespace std;
int main()
{

int p1,p2,p3,total;
char gender;
float per;
cout<<"Enter 3 subject marks:";
cin>>p1>>p2>>p3;
cout<<"Enter gender(m/f):";
cin>>gender;
total=p1+p2+p3;
per=(total/100)*300;
if(per>=62 && gender=='f')
 cout<<"\nAdmission Approved";	
else
cout<<"\nAdmission Cancelled";
return 0;	
	
}
