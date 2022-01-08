//find biggest number
#include<iostream>
using namespace std;
int main()
{
  int a,b,c,big;
   cout<<"Enter three numbers :";
    cin>>a>>b>>c;
     if(a>b){
             if(a>c)
             big=a;
             else
             big=c;
             }
     else{
         if(b>c)
         big=b;
         else
         big=c;
         }
         cout<<"Biggest number is :"<<big;
 return 0;
}
