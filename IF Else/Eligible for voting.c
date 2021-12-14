#include<stdio.h>
#include<string.h>
int main()
{
	int age;
	char votingcard;
	printf("Enter the age : ");
	scanf("%d",&age);
	printf("Do you have votingcard : ");
	scanf("%s",&votingcard);
	if(age>=18 && votingcard=="yes")
	printf("Eligible for voting");
	else
	printf("Not Eligible for voting");
	return 0;
	
}
