#include <iostream>
using namespace std;
int main(){
   int num, i, j, array1[5], array2[5];
   cout<<"Enter no of elements in array\n";
   cin>>num;
   cout<<"Enter array elements\n";
   for (i = 0; i < num ; i++)
      cin>>array1[i];
   for (i = num - 1, j = 0; i >= 0; i--,j++)
      array2[j] = array1[i];
   for (i = 0; i < num; i++)
      array1[i] = array2[i];
   cout<<"The reversed array:\n";
   for (i = 0; i< num; i++)
      cout<<array1[i];
   return 0;
}
