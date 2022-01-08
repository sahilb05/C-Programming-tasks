//to find the multiplication of first digit and last digit
#include<iostream>
using namespace std;
int main()
{
  int num,mul,firstdigit,lastdigit;
  cout<<"enter any number";
  cin>>num;
  lastdigit=num%10;
  firstdigit=num;
  while(num>=10)
  {
  	num=num/10;
  }
  firstdigit=num;
  mul=firstdigit*lastdigit;
  cout<<"Multiplication of first and last digit number is :"<<mul;
  return 0;
}
