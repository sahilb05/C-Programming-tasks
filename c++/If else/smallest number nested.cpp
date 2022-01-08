#include<iostream>
using namespace std;
int main()
{
	int a,b,c,small;
   cout<<"Enter three numbers :";
    cin>>a>>b>>c;
     if(a<b){
             if(a<c)
             small=a;
             else
             small=c;
             }
     else{
         if(b<c)
         small=b;
         else
         small=c;
         }
         cout<<"Biggest number is :"<<small;
 return 0;
}
