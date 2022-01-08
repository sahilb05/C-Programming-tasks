//To check the day is a weekend
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char day[3];
	cout<<"Enter any day :";
	gets(day);
	
	if(strcmp(day,"sat")==0 || strcmp(day,"sun")==0)
	cout<<"Weekend";
	else
	cout<<"Working day";
	return 0;
}
