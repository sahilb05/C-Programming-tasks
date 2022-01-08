#include<iostream>
using namespace std;
int main()
{
float m1,m2,m3,m4,total,per;
char grade;
cout<<"Enter marks of subject:";
cin>>m1>>m2>>m3>>m4;
total=m1+m2+m3+m4;
per=(total/4.0);
cout<<"\n total marks:"<<total;
cout<<"\n percentage is:"<<per2;
if(per>=90)
grade='A';
else if(per>=80 && per<90)
grade='B';
else if(per>=70 && per<80)
grade='C';
else if(per>=60 && per<70)
grade='D';
else if(per>=50 && per<60)
grade='E';
else 
grade='f';
cout<<"\n percentage is:"<<per;
cout<<"\n grade is :"<<grade;
return 0;	
}
