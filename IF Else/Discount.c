#include<stdio.h>
int main()
{
	int cost;
	char user;
	printf("Enter the cost price :");
	scanf("%d",&cost);
	printf("Is the user is student (Y/N) : ");
	scanf("%s",&user);
	if(cost>=500 && user=='Y')
			printf("\nuser got 10%% discount");
			else
			printf("\nuser got 5%% discount");
			if(cost>=500 && user=='N')
			printf("\nuser got 8%% discount");
			else
			printf("\nuser got 2%% discount");
			return 0;
	}
	
