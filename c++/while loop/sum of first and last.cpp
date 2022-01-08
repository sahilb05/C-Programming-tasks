//to fint the sum of first digit and last digit
#include<iostream>
using namespace std;

int main()
{
  int num,sum,firstdigit,lastdigit;
  cout<<"Enter any number";
  cin>>num;
  lastdigit=num%10;
  firstdigit=num;
  while(num>=10)
  {
  	num=num/10;
  }
  firstdigit=num;
  sum=firstdigit+lastdigit;
  cout<<"Sum of first and last digit number is "<<sum;
  return 0;
}
