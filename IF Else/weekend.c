//To check the day is a weekend
#include<stdio.h>
int main()
{
	char day[3];
	printf("Enter any day");
	gets(day);
	
	if(strcmp(day,"sat")==0 || strcmp(day,"sun")==0)
	printf("Weekend");
	else
	printf("Working day");
	return 0;
}
